#include <stdio.h>

int main() {
    float income;
    printf("Hey, please enter your income: ");
    scanf("%f", &income);

    if (income <= 250000) {
        printf("Congrats, you don't have to pay GST.\n");
    } else if (income > 250000 && income <= 500000) {
        float gst = income * 0.05;
        printf("You have to pay total GST at 5%% rate. Total GST is = %f\n", gst);
    } else if (income > 500000 && income <= 1000000) {
        float gst = income * 0.20;
        printf("You have to pay total GST at 20%% rate. Total GST is = %f\n", gst);
    } else if (income > 1000000) {
        float gst = income * 0.30;
        printf("You have to pay total GST at 30%% rate. Total GST is = %f\n", gst);
    } else {
        printf("Please enter correct data.\n");
    }

    return 0;
}
