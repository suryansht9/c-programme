#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0.0;

    printf("🛍️ Welcome to the Shopping Mall 🛍️\n");

    do {
        printf("\nSelect an item to buy:\n");
        printf("1. Clothes - $50\n");
        printf("2. Electronics - $200\n");
        printf("3. Groceries - $30\n");
        printf("4. Exit and Checkout\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += quantity * 50;
                break;
            case 2:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += quantity * 200;
                break;
            case 3:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += quantity * 30;
                break;
            case 4:
                printf("\n🧾 Total bill: $%.2f\n", total);
                printf("Thank you for visiting the Shopping Mall!\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
