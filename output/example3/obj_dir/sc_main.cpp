#include "VWaveformGenerator.h"
#include <cstdio>
#include <sysc/communication/sc_signal.h>
#include <sysc/kernel/sc_simcontext.h>
#include <sysc/kernel/sc_time.h>
#include <sysc/tracing/sc_trace.h>
#include <sysc/utils/sc_report.h>
#include <verilated_vcd_sc.h>

using namespace sc_core;

//----------------------------------------------
// 主仿真程序
//----------------------------------------------
int sc_main(int argc, char **argv) {
  // 初始化Verilator
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  // 创建时钟和复位信号和周期控制器
  sc_clock clk{"clk", 10, SC_NS, 0.5, 3, SC_NS, true}; // 10ns周期，50%占空比
  sc_signal<bool> reset{"reset"};
  sc_signal<vluint32_t> waveType{"waveType"};
  sc_signal<vluint32_t> freqCtrl{"freqCtrl"};
  sc_signal<vluint32_t> phaseOffset{"phaseOffset"};
  sc_signal<vluint32_t> output{"output"};

  // const int STOP_CYCLES = 10000;
  // StopController stop_ctrl("stop_ctrl", STOP_CYCLES);
  // stop_ctrl.clk(clk); // 连接控制器时钟

  // 实例化DUT并连接跟踪
  VWaveformGenerator *top = new VWaveformGenerator{"top"};
  auto tfp = new VerilatedVcdSc;

  // 连接DUT端口
  top->clock(clk);
  // top->reset是 高电平复位
  top->reset(reset);
  top->io_waveType(waveType);
  top->io_freqCtrl(freqCtrl);
  top->io_phaseOffset(phaseOffset);
  top->io_output(output);

  sc_start(SC_ZERO_TIME);

  // 规则：必须在sc_start之后调用trace
  top->trace(tfp, 0);
  // 规则：必须在sc_start之后调用open
  tfp->open("vlt_dump.vcd");

  //----------------------------------------------
  // 主仿真循环
  //----------------------------------------------
  // 2^8 = 256
  auto freqCtrls = {1, 2, 4, 8, 16, 32, 64, 128, 256};
  phaseOffset = 0;

  // 测试生存不同的波形
  for (int i = 0; i < 4; i++) {
    waveType = i;
    for (auto freq : freqCtrls) {
      freqCtrl = freq;
      for (int j = 0; j < 256 * 10; j++) {
        if (tfp)
          tfp->flush();
        sc_start(10, SC_NS);
      }
    }
  }

  //----------------------------------------------
  // 清理资源
  //----------------------------------------------
  tfp->close();
  delete tfp;
  delete top;

  printf("[SIM] 仿真结束于 %s\n", sc_time_stamp().to_string().c_str());
  return 0;
}
