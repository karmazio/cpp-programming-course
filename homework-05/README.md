# Homework #5: [Multi-threaded Banking System]

## Task description
You are developing a system for a bank where multiple tellers (threads) serve customers simultaneously. You need to implement secure transactions with accounts and statistics.

Requirements:

BankAccount class with methods:
- deposit(amount) - account replenishment
- withdraw(amount) - withdrawal (check sufficiency)
- get_balance() - get balance

BankStatistics class for collecting statistics:

- record_transaction(amount) - record transaction
- get_total_transactions() - total number
- get_total_amount() - total amount of transactions

Bank simulation:
- 5 cashiers (flows) serve customers simultaneously
- Each cashier makes 100 random operations
- Operations: replenishment (50-500 UAH) or withdrawal (10-200 UAH)

Expected results

Unsafe version:
- Balance can be negative
- Statistics are inaccurate
- Results vary between runs

Safe version:
- Balance is always correct
- Accurate statistics
- Stable results

## Files
- `Main.cpp` - the main program file
- `SafeBankAccount.hpp`
- `UnsafeBankAccount.hpp`

## Compilation and launch
```bash
g++ -o program Karmazinskyi_CPP_Pro_Homework_1.cpp
./program