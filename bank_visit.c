#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0, amount;

    printf("🏦 Welcome to Simple Bank System 🏦\n");

    do {
        printf("\nSelect an option:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("✅ Deposited successfully.\n");
                } else {
                    printf("❌ Invalid amount.\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("✅ Withdrawn successfully.\n");
                } else {
                    printf("❌ Insufficient balance or invalid amount.\n");
                }
                break;

            case 3:
                printf("💰 Current Balance: $%.2f\n", balance);
                break;

            case 4:
                printf("👋 Thank you for visiting the bank!\n");
                break;

            default:
                printf("❗ Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
