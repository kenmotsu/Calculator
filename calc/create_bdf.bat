set PATH="C:\Program Files\Parasoft\C++test\10.3";%PATH%
set CPPTEST_SCAN_OUTPUT_FILE=C:\Users\kenmotsu\Desktop\Calculator\calc\src\cpptesttrace.bdf
set CPPTEST_SCAN_PROJECT_NAME=calc

rm -rf %CPPTEST_SCAN_OUTPUT_FILE%
cd C:\Users\kenmotsu\Desktop\Calculator\calc\src
make clean
cpptesttrace make clean all
