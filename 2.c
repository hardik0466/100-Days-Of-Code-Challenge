//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    float num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;

    // Handle division by zero
    if (num2 != 0) {
        float quotient = num1 / num2;
        printf("\nQuotient: %.2f\n", quotient);
    } else {
        printf("\nQuotient: Division by zero is not allowed.\n");
    }

    // Output results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);

    return 0;
}
