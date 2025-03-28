cp obj_dir/sc_main.cpp ./
verilator --sc --exe --trace --timing  sc_main.cpp SimpleAdder.sv
cp sc_main.cpp obj_dir/
make -j -C obj_dir -f VSimpleAdder.mk  VSimpleAdder
obj_dir/VSimpleAdder
gtkwave vlt_dump.vcd