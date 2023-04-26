#include <stdio.h>

int main() {
    float num1, num2;
    int operation;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter the operation you want to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &operation);

    switch(operation) {
        case 1:
            printf("The sum of %f and %f is %f", num1, num2, num1 + num2);
            break;
        case 2:
            printf("The difference between %f and %f is %f", num1, num2, num1 - num2);
            break;
        case 3:
            printf("The product of %f and %f is %f", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 == 0) {
                printf("Cannot divide by zero");
            } else {
                printf("The division of %f by %f is %f", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Invalid operation");
    }

    return 0;
}
