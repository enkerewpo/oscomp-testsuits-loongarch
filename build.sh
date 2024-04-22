rm -rf sdcard
mkdir sdcard

make lmbench
# make unixbench

# npucore_testbench_path = ../../c_src/guest_os/npucore/NPUCore/NPUCore-3A5000-main/user/busybox_lua_testsuits/loongarch64/loongvisor
npucore_testbench_path=../../c_src/guest_os/npucore/NPUcore-3A5000-main/user/busybox_lua_testsuites/loongarch64/loongvisor
echo "npucore_testbench_path: $npucore_testbench_path"
rm -rf $npucore_testbench_path/*

# copy all files in sdcard to npucore_testbench_path
cp -r sdcard/* $npucore_testbench_path
echo "copy sdcard to npucore_testbench_path done"