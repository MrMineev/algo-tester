# Algo Tester

To run the tester execute
```
python manage.py
```
If you want to compile the main.cpp program add "compile" after the command.
```
python manage.py compile
```
And to unit test the tests located in the folder "tests" add the "test" command.
```
python manage.py compile test
```
If you want to just compile and run the code use the "run" command.
```
python manage.py compile run
```
For stress testing write the correct/slow solution in stupid.cpp and the fast/incorrect solution in main.cpp, and then write a test generator in generator.cpp. Then just run the command
```
python manage.py compile compile_stupid debug
```
And the program will generate tests and check that the output from both programs is the same, if they are different the test along with the responses will be saved in "test.txt", "ans_smart.txt" and "ans_stupid.txt".

