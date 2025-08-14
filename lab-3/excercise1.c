#include <stdio.h>

int main() {
    int num1, num2, choice;
    int result;

    printf("Enter Num1 : ");
    scanf("%d", &num1);
    
    printf("Enter Num2 : ");
    scanf("%d", &num2);

    printf("\nCalculator Menu :\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n"); 
    printf("Choose menu : ");
    scanf("%d", &choice);

    if (choice == 1) {
        result = num1 + num2;
        printf("Ans : %d + %d = %d\n", num1, num2, result);
    } 
    else if (choice == 2) {
        result = num1 - num2;
        printf("Ans : %d - %d = %d\n", num1, num2, result);
    } 
    else if (choice == 3) {
        result = num1 * num2;
        printf("Ans : %d * %d = %d\n", num1, num2, result);
    } 
    else if (choice == 4) {
        if (num2 != 0) {
            float div = (float)num1 / num2;
            printf("Ans : %d / %d = %.2f\n", num1, num2, div);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else if (choice == 5) {
        if (num2 != 0) {
            result = num1 % num2;
            printf("Ans : %d %% %d = %d\n", num1, num2, result);
        } else {
            printf("Error: Modulo by zero is not allowed.\n");
        }
    } 
    else {
        printf("Invalid menu choice.\n");
    }

    return 0;
}