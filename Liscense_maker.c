#include <stdio.h>

int main() {
    int year;

    printf("Enter your birth year: ");
    scanf("%d", &year);

    int age = 2025 - year;

    if (age > 18) {
        printf("You are adult \n");
    } else {
        printf("You aren't adult so you can't make license\n");
        return 0;
    }

    char ans;
    char name[50];

    printf("Wanna make license? (y/n): \n");
    scanf(" %c", &ans);  // space added before %c

    if (ans == 'y') {
        printf("Enter name: \n");
        scanf(" %[^\n]", name);  // read full name (even spaces)

        printf("License:\n");
        printf("Name: %s\n", name);
        printf("Age: %d\n", age);
    }
    else if (ans == 'n') {
        printf("Ok then\n");
        return 0;
    }else {
        printf("Invilid Input \n");
        return 0;

    }



    return 0;
}
