cp obj_dir/sc_main.cpp ./
verilator --sc --exe --trace --timing  sc_main.cpp LedBlink.sv
cp sc_main.cpp obj_dir/
make -j -C obj_dir -f VLedBlink.mk  VLedBlink
obj_dir/VLedBlink
gtkwave vlt_dump.vcd