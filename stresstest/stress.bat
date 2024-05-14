@echo off

REM Check if numLoop is provided as the first argument, otherwise default to 1000
if [%1]==[] (
    set /A numLoop=1000
) else (
    set /A numLoop=%1
)

if [%2]==[] (
    set /A doComp=1
) else (
    set /A doComp=%2
)

if %doComp% equ 1 (
    echo.
    echo Compiling mycode, gen, solution...

    g++ -std=c++17 gen.cpp -o gen
    g++ -std=c++17 mycode.cpp -o mycode
    g++ -std=c++17 solution.cpp -o solution

    echo Done compiling.
    echo.
)

set pass_count=0
set fail_count=0

if exist test_results.txt del test_results.txt

for /l %%x in (1, 1, %numLoop%) do (
    echo *****************
    echo test %%x:
    gen > input.in
    mycode < input.in > output.out 
    solution < input.in > output2.out

    rem add \f after "fc" to ignore trailing whitespaces and to convert
    rem multiple whitespaces into one space
    fc output.out output2.out > nul
    if errorlevel 1 (
        set /A fail_count+=1
        echo ******************* >> test_results.txt
        echo TEST - %%x: >> test_results.txt
        echo FAILED
        echo. >> test_results.txt
        echo INPUT >> test_results.txt
        type input.in >> test_results.txt
        echo. >> test_results.txt
        echo OUTPUT >> test_results.txt
        type output.out >> test_results.txt
        echo. >> test_results.txt
        echo EXPECTED OUTPUT >> test_results.txt
        type output2.out >> test_results.txt
        echo. >> test_results.txt
        echo status: FAILED >> test_results.txt
        echo ******************* >> test_results.txt
        echo. >> test_results.txt
        echo.
    ) else (
        set /A pass_count+=1
        echo ******************* >> test_results.txt
        echo TEST - %%x: >> test_results.txt
        echo PASSED
        echo. >> test_results.txt
        echo INPUT >> test_results.txt
        type input.in >> test_results.txt
        echo. >> test_results.txt
        echo OUTPUT >> test_results.txt
        type output.out >> test_results.txt
        echo. >> test_results.txt
        echo EXPECTED OUTPUT >> test_results.txt
        type output2.out >> test_results.txt
        echo. >> test_results.txt
        echo status: PASSED >> test_results.txt
        echo ******************* >> test_results.txt
        echo. >> test_results.txt
        echo.
    )
)
echo.
echo *****************
echo All tests completed. Passed: %pass_count%, Failed: %fail_count%.
echo *****************
echo.
echo ***************** >> test_results.txt
echo All tests completed. Passed: %pass_count%, Failed: %fail_count%. >> test_results.txt
echo ***************** >> test_results.txt

del input.in
del output.out
del output2.out
del solution.exe
del gen.exe
del mycode.exe
