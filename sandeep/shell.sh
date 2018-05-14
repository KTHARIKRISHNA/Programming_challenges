Build() {
echo "Create a Build folder"
echo "perform the cmake"
echo "perform the Build Process"
cmake ..
make
echo "generated executables"
}

cd build
Build

./testcase.sh test_case.txt

exit 0
