#include "operations.h"
#include "router.h"


void startBank(){
    double balance = 0.0;
    int choice;
    while (1){
        printf("\n--- BANK MENU --- \n");
        printf("1. Deposit\n");
        printf("2. Withdrawal\n");
        printf("3. Check Balance \n");
        printf("0. Exit\n");
        printf("Make a choice\n");
        scanf("%d", &choice);

        if(choice ==  0) break;

        route(choice, &balance);
    }
}

