# Homework #1: [Auto and range-based loops]

## Task description
Task 1: Parallel calculation of mathematical functions
Create a program that calculates various mathematical functions in separate threads:

Thread 1: calculates the factorial of 15
Thread 2: finds the sum of squares of numbers from 1 to 1000
Thread 3: calculates Fibonacci numbers up to the 30th element
Thread 4: finds all prime numbers up to 100
Each thread outputs its result independently of the others. Threads should be in a thread pool, not created separately!

Task 2: Order Processing System
Create a system where:

Thread 1: validates initial orders (checks format, data correctness)
Thread 2: waits for thread 1 to complete, calculates prices for valid orders
Thread 3: waits for thread 2 to complete, checks for stock availability
Thread 4: waits for thread 3 to generate invoices and send to customers

## Files
- `Main.cpp` - the main program file
- `ThreadPool.hpp`
- `ThreadPool.cpp`
- `OrderProcessor.hpp`
- `OrderProcessor.cpp`

## Compilation and launch
```bash
g++ -o program Main.cpp
./program