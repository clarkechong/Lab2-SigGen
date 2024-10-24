rm -rf ./obj_dir/
rm -rf ./dualwavegen.vcd

verilator -Wall --cc --trace dualwavegen.sv counter.sv rom.sv --exe dualwavegen_tb.cpp
make -j -C ./obj_dir/ -f Vdualwavegen.mk Vdualwavegen
./obj_dir/Vdualwavegen