#!/bin/bash
INPUT_FIR="LedBlink.fir"
OUTPUT_SV="LedBlinkFirtool.sv"

# 核心转换命令
firtool $INPUT_FIR \
    --format=fir \
    --lowering-options=verifLabels \
    --o=$OUTPUT_SV \
    --disable-annotation-unknown \
    --mlir-timing-display=tree \
    -g --mlir-timing --mlir-timing-display=tree \
    --verilog