#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <stdio.h>

void deposit(double *balance, double amount) {
    *balance += amount;
}

int withdraw(double *balance, double amount) {
    if (amount > *balance) {
        return 0; // Fail
    }
    *balance -= amount;
    return 1; // Success
}

void checkBalance(double balance) {
    printf("Current Balance: %.2f\n", balance);
}

#endif // OPERATIONS_H

