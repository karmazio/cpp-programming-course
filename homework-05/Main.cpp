#include <iostream>
#include <memory>
#include <vector>


#include "UnsafeBankAccount.hpp"
#include "SafeBankAccount.hpp"




// HOMEWORK 5
void testUnsafeBankAccount() {
    UnsafeBankAccount account;
    UnsafeBankStatistics stats;

    std::cout << "\n=== Unsafe Bank Simulation ===\n";
    std::cout << "Initial balance: " << account.get_balance() << "\n";

    std::vector<std::thread> cashiers;
    for (int i = 0; i < 5; ++i) {
        cashiers.emplace_back(cashier_work, std::ref(account), std::ref(stats), i);
    }

    for (auto& t : cashiers) t.join();

    std::cout << "Final balance: " << account.get_balance() << "\n";
    std::cout << "Total transactions: " << stats.get_total_transactions() << "\n";
    std::cout << "Total transaction amount: " << stats.get_total_amount() << "\n";
}

void testSafeBankAccount() {
    SafeBankAccount account;
    SafeBankStatistics stats;

    std::cout << "\n=== Safe Bank Simulation ===\n";
    std::cout << "Initial balance: " << account.get_balance() << "\n";

    std::vector<std::thread> cashiers;
    for (int i = 0; i < 5; ++i) {
        cashiers.emplace_back(safe_cashier_work, std::ref(account), std::ref(stats), i);
    }

    for (auto& t : cashiers) t.join();

    std::cout << "Final balance: " << account.get_balance() << "\n";
    std::cout << "Total transactions: " << stats.get_total_transactions() << "\n";
    std::cout << "Total transaction amount: " << stats.get_total_amount() << "\n";
    std::cout << "All cashiers completed work safely!\n";
}



int main() {

    // HW 5
    testUnsafeBankAccount();
    testUnsafeBankAccount();
    testUnsafeBankAccount();
    testSafeBankAccount();
    testSafeBankAccount();
    testSafeBankAccount();

    return 0;
}
