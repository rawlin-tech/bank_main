#ifndef ROUTER_H
#define ROUTER_H

#include "operations.h"

void route(int choice, double *balance){
    double amount;
    switch(choice){
        case 1:
            printf("Enter the amount to be deposit:  ");
            scanf("%lf", &amount);
            deposit(balance, amount);
            break;

        case 2:
            printf("Enter the amount to withdraw:  ");
            scanf("%lf", &amount);
            if( !withdraw(balance, amount))
                printf("Insufficient funds to complete withdrawal!\n");
            break;

        case 3:
            checkBalance(*balance);
            break;
        default:
            printf("Invalid Selection.\n");
    }
}

#endif // ROUTER_H

