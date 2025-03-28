cp obj_dir/sc_main.cpp ./
verilator --sc --exe --trace --timing  sc_main.cpp WaveformGenerator.sv
cp sc_main.cpp obj_dir/
make -j -C obj_dir -f VWaveformGenerator.mk  VWaveformGenerator
obj_dir/VWaveformGenerator
gtkwave vlt_dump.vcd