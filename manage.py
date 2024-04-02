import sys
import os
import time
from datetime import datetime

def ccompile(filename):
    os.system(f"/opt/homebrew/bin/g++-13 {filename}.cpp -o {filename}")

def log(message):
    print(f"[\033[1;34mINFO\033[0m {datetime.now()}] {message}") # ]]


arguments = sys.argv

is_compile = False
is_testing = False
is_stupid = False             
is_debug = False
is_run = False

for arg in arguments:
    if arg == "debug":
        is_debug = True
        log("MODE STRESS")
    elif arg == "run":
        is_run = True
        log("MODE RUN")
    elif arg == "compile_stupid":
        is_stupid = True
        log("MODE STUPID")
    elif arg == "compile":
        is_compile = True
        log("MODE COMPILE")
    elif arg == "test":
        is_testing = True
        log("MODE TESTING")

if is_stupid:
    log("Compiling (With Flags)...")
    ccompile("stupid")
    # os.system("g++ stupid.cpp -o stupid -std=c++17 -Wall -Wextra -Wshadow -Werror")
    log("Finished!")

if is_compile:
    log("Compiling (With Flags)...")
    ccompile("main")
    # os.system("g++ main.cpp -o main -std=c++17 -Wall -Wextra -Wshadow -Werror")
    log("Finished!")

if is_run:
    log("[START]")
    os.system("./main")
    log("[END]")

if is_testing:
    log("Init Testing...")
    n = int(input("NUMBER OF TESTS: "))
    filepath = "tests/IGNORE_ME.txt"
    for i in range(n):
        if is_stupid == False:
            os.system(f"./main < tests/test_{i + 1}.txt > {filepath}")
        else:
            os.system(f"./stupid < tests/test_{i + 1}.txt > {filepath}")

        correct = open(f"tests/ans_{i + 1}.txt", "r").read().strip()
        current_answer = open(f"{filepath}", "r").read().strip()

        if correct == current_answer:
            print(f"\033[1;32m[{i + 1}] OK \033[0m") #]]
        else:
            print(f"\033[1;31;40m[{i + 1}] WA \033[0m") #]]
            print("--- Correct ---")
            print(correct)
            print("--- Given -----")
            print(current_answer)

if is_debug:
    log("Compiling Generator (Without Flags)...")
    ccompile("generator")
    log("Finished!")

    log("Init Debug...")
    filepath = "tests/IGNORE_ME.txt"
    index = 0
    while True:
        os.system(f"./generator > test.txt")

        start = time.time()
        os.system(f"./main < test.txt > ans_smart.txt")
        end = time.time()
        os.system(f"./stupid < test.txt > ans_stupid.txt")

        current_answer = open(f"ans_smart.txt", "r").read().strip()
        correct = open(f"ans_stupid.txt", "r").read().strip()

        if end - start > 1:
            print(f"\033[1;31;40m[{index + 1}] TL | {str(end - start)[:7]} s \033[0m") # ]]
            print("--- Test ------")
            print(open(f"test.txt", "r").read())
            print("--- Correct ---")
            print(correct)
            print("--- Given -----")
            print(current_answer)
            break
        elif correct == current_answer:
            print(f"\033[1;32m[{index + 1}] OK | {str(end - start)[:7]} s \033[0m") # ]]
        else:
            print(f"\033[1;31;40m[{index + 1}] WA | {str(end - start)[:7]} s \033[0m") # ]]
            print("--- Test ------")
            print(open(f"test.txt", "r").read())
            print("--- Correct ---")
            print(correct)
            print("--- Given -----")
            print(current_answer)
            break

        index += 1



