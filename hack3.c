#include<stdio.h>
struct account {
    char name[20];
    int account_number, initial_amount;
} a[3];
int creataccount1(int i) {
    printf("\nEnter the basic details to create account %d:", i + 1);
    printf("\nEnter the name: ");
    scanf("%s", a[i].name);
    printf("Enter the account number: ");
    scanf("%d", &a[i].account_number);
    printf("Enter the initial amount to deposit: ");
    scanf("%d", &a[i].initial_amount);

    printf("\nThe details of the person are:\n");
    printf("Account holder name: %s\n", a[i].name);
    printf("Account number: %d\n", a[i].account_number);
    printf("Initial amount: %d\n", a[i].initial_amount);

    return a[i].initial_amount;  
}
int main() {
    int deposit, withdraw, choice, amount[3], action,i;
    printf("\n**************** WELCOME TO SBI BANK *****************");
    for (i = 0; i < 3; i++) {  
        amount[i] = creataccount1(i);  
    }
    printf("\n****** Enter number to modify the account amount *****");
    printf("\nEnter 1 for person (1)");
    printf("\nEnter 2 for person (2)");
    printf("\nEnter 3 for person (3): ");
    scanf("%d", &choice);
    if (choice >= 1 && choice <= 3) {
        i = choice ;  
        printf("\nEnter 1 for Deposit and 2 for Withdraw: ");
        scanf("%d", &action);

        switch (action) {
            case 1:  
                printf("\nYou have %d rupees in your account.", amount[i]);
                printf("\nEnter the amount you want to add to your account: ");
                scanf("%d", &deposit);
                amount[i] += deposit;
                printf("\nAfter deposition, you have %d rupees in your account.", amount[i]);
                break;
            case 2:  
                printf("\nYou have %d rupees in your account.", amount[i]);
                printf("\nEnter the amount you want to withdraw: ");
                scanf("%d", &withdraw);
                if (withdraw > amount[i])printf("\nInsufficient balance! You only have %d rupees.", amount[i]);
                else {
                    amount[i] -= withdraw;
                    printf("\nAfter withdrawal, you have %d rupees in your account.", amount[i]);
                }
                break;

            default: printf("\nInvalid operation.");
        }
    } else printf("\nInvalid account selection.");
    printf("\nThank you for visiting our bank");
    return 0;
}
