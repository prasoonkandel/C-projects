#include <stdio.h>

int main() {
    printf("Income tax calculator\n\n");

    double income;  // Changed from int to double
    char marriage_status;
    double tax;

    printf("Enter your annual income: \n");
    scanf("%lf", &income);  // Changed from %d to %lf for double

    printf("Enter your marriage status (m for married, u for unmarried): \n");
    scanf(" %c", &marriage_status);  // Note the space before %c to consume any leftover newline

    if (marriage_status == 'm') {
        if (income <= 600000) {
            tax = income * 0.01; 
        } else if (income <= 800000) {
            tax = 600000 * 0.01 + (income - 600000) * 0.1; printf("your tax upto 6 lakh is 1%% , 6000 \n upto 8 lakh is 10%% , 20000 \n");
        } else if (income <= 1100000) {
            tax = 600000 * 0.01 + 200000 * 0.1 + (income - 800000) * 0.2;printf("your tax upto 6 lakh is 1%% , 6000 \n upto 8 lakh is 10%% , 20000 \n upto 11 lakh is 20%% , 60000 \n");
        } else if (income <= 2000000) {
            tax = 600000 * 0.01 + 200000 * 0.1 + 300000 * 0.2 + (income - 1100000) * 0.3;printf("your tax upto 6 lakh is 1%% , 6000 \n upto 8 lakh is 10%% , 20000 \n upto 11 lakh is 20%% , 60000 \n upto 20 lakh is 30%% , 270000 \n");
        } else if (income <= 5000000) {
            tax = 600000 * 0.01 + 200000 * 0.1 + 300000 * 0.2 + 900000 * 0.3 + (income - 2000000) * 0.36;printf("your tax upto 6 lakh is 1%% , 6000 \n upto 8 lakh is 10%% , 20000 \n upto 11 lakh is 20%% , 60000 \n upto 20 lakh is 30%% , 270000 \n upto 50 lakh is 36%% , 1080000 \n");
        } else {
            tax = 600000 * 0.01 + 200000 * 0.1 + 300000 * 0.2 + 900000 * 0.3 + 3000000 * 0.36 + (income - 5000000) * 0.39;printf("your tax upto 6 lakh is 1%% , 6000 \n upto 8 lakh is 10%% , 20000 \n upto 11 lakh is 20%% , 60000 \n upto 20 lakh is 30%% , 270000 \n upto 50 lakh is 36%% , 1080000 \n above that is 39%% \n");
        }
        printf("Your yearly income tax is: %.2lf\n", tax);  // Changed to %.2lf
    }
    else if (marriage_status == 'u') {
        if (income <= 500000) {
            tax = income * 0.01; printf("your tax upto 5 lakh is 1%% , 6000 \n");
        } else if  (income <= 700000) {
            tax = 500000 * 0.01 + (income - 500000) * 0.1; printf("your tax upto 5 lakh is 1%% , 6000 \n upto 7 lakh is 10%% , 20000 \n");
        } else if (income <= 1000000) {
            tax = 500000 * 0.01 + 200000 * 0.1 + (income - 700000) * 0.2; printf("your tax upto 5 lakh is 1%% , 6000 \n upto 7 lakh is 10%% , 20000 \n upto 10 lakh is 20%% , 60000 \n");
        } else if (income <= 2000000) {
            tax = 500000 * 0.01 + 200000 * 0.1 + 300000 * 0.2 + (income - 1000000) * 0.3;printf("your tax upto 5 lakh is 1%% , 6000 \n upto 7 lakh is 10%% , 20000 \n upto 10 lakh is 20%% , 60000 \n upto 20 lakh is 30%% , 270000 \n");
        } else if (income <= 5000000) {
            tax = 500000 * 0.01 + 200000 * 0.1 + 300000 * 0.2 + 1000000 * 0.3 + (income - 2000000) * 0.36; printf("your tax upto 5 lakh is 1%% , 6000 \n upto 7 lakh is 10%% , 20000 \n upto 10 lakh is 20%% , 60000 \n upto 20 lakh is 30%% , 270000 \n upto 50 lakh is 36%% , 1080000 \n");
        } else {
            tax = 500000 * 0.01 + 200000 * 0.1 + 300000 * 0.2 + 1000000 * 0.3 + 3000000 * 0.36 + (income - 5000000) * 0.39;printf("your tax upto 5 lakh is 1%% , 6000 \n upto 7 lakh is 10%% , 20000 \n upto 10 lakh is 20%% , 60000 \n upto 20 lakh is 30%% , 270000 \n upto 50 lakh is 36%% , 1080000 \n above that is 39%% \n");
        }
        printf("Your yearly income tax is: %.2lf\n", tax);
    }
    else {
        printf("Invalid marriage status\n");
        return 0;
    }

    return 0;
}
