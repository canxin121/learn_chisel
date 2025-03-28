#include "VLedBlink.h"
#include <cstdio>
#include <sysc/kernel/sc_simcontext.h>
#include <sysc/kernel/sc_time.h>
#include <sysc/tracing/sc_trace.h>
#include <verilated_vcd_sc.h>

using namespace sc_core;

//----------------------------------------------
// 周期控制模块
//----------------------------------------------
SC_MODULE(StopController) {
  sc_in<bool> clk;
  int cycle_count = 0;
  const int STOP_CYCLES;

  SC_HAS_PROCESS(StopController);
  StopController(sc_module_name name, int stop_cycles)
      : STOP_CYCLES(stop_cycles) {
    SC_METHOD(count_cycles);
    sensitive << clk.pos();
    dont_initialize();
  }

  void count_cycles() {
    if (++cycle_count >= STOP_CYCLES) {
      Verilated::gotFinish(true);
      sc_stop();
    }
  }
};

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
  const int STOP_CYCLES = 10000;
  StopController stop_ctrl("stop_ctrl", STOP_CYCLES);
  stop_ctrl.clk(clk); // 连接控制器时钟

  // 实例化DUT并连接跟踪
  VLedBlink *top = new VLedBlink{"top"};
  auto tfp = new VerilatedVcdSc;

  // 连接DUT端口
  top->clock(clk);
  // top->reset是 高电平复位
  top->reset(reset);

  sc_start(SC_ZERO_TIME); // 初始时间推进

  // 规则：必须在sc_start之后调用trace
  top->trace(tfp, 0);
  // 规则：必须在sc_start之后调用open
  tfp->open("vlt_dump.vcd");

  //----------------------------------------------
  // 主仿真循环
  //----------------------------------------------
  while (!Verilated::gotFinish()) {
    if (tfp)
      tfp->flush();

    sc_start(1, SC_NS);
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
