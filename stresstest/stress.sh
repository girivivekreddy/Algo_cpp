#!/bin/bash

# Check if numLoop is provided as the first argument, otherwise default to 1000
if [ -z "$1" ]; then
    numLoop=1000
else
    numLoop=$1
fi

if [ -z "$2" ]; then
    doComp=1
else
    doComp=$2
fi

if [ "$doComp" -eq 1 ]; then
    echo
    echo "Compiling mycode, gen, solution..."

    g++ -std=c++17 gen.cpp -o gen
    g++ -std=c++17 mycode.cpp -o mycode
    g++ -std=c++17 solution.cpp -o solution

    echo "Done compiling."
    echo
fi

pass_count=0
fail_count=0

# Remove existing test_results.txt if it exists
[ -f test_results.txt ] && rm test_results.txt

for ((x=1; x<=numLoop; x++)); do
    echo "*****************"
    echo "test $x:"
    ./gen > input.in
    ./mycode < input.in > output.out
    ./solution < input.in > output2.out

    # Compare files ignoring trailing whitespace and converting multiple spaces to one
    if ! diff -w output.out output2.out > /dev/null; then
        fail_count=$((fail_count + 1))
        {
            echo "*******************"
            echo "TEST - $x:"
            echo "FAILED"
            echo
            echo "INPUT"
            cat input.in
            echo
            echo "OUTPUT"
            cat output.out
            echo
            echo "EXPECTED OUTPUT"
            cat output2.out
            echo
            echo "status: FAILED"
            echo "*******************"
            echo
        } >> test_results.txt
    else
        pass_count=$((pass_count + 1))
        {
            echo "*******************"
            echo "TEST - $x:"
            echo "PASSED"
            echo
            echo "INPUT"
            cat input.in
            echo
            echo "OUTPUT"
            cat output.out
            echo
            echo "EXPECTED OUTPUT"
            cat output2.out
            echo
            echo "status: PASSED"
            echo "*******************"
            echo
        } >> test_results.txt
    fi
done

echo
echo "*****************"
echo "All tests completed. Passed: $pass_count, Failed: $fail_count."
echo "*****************"
echo
{
    echo "*****************"
    echo "All tests completed. Passed: $pass_count, Failed: $fail_count."
    echo "*****************"
} >> test_results.txt

rm input.in output.out output2.out gen mycode solution
