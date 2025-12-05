#include <stdio.h>

float balance = 0;   // global balance

float deposit(float amount) {
    balance += amount;
    return balance;
}

float withdraw(float amount) {
    if (amount > balance) {
        printf("Insufficient Balance!\n");
        return balance;
    }
    balance -= amount;
    return balance;
}

float checkBalance() {
    return balance;
}

int main() {
    int choice;
    float amount;

    do {
        printf("\n--- Banking Menu ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            deposit(amount);
        }

        else if (choice == 2) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            withdraw(amount);
        }

        else if (choice == 3) {
            printf("Current Balance: %.2f\n", checkBalance());
        }

        else if (choice == 4) {
            printf("Thank you!\n");
        }

        else {
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}
