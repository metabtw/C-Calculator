#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("Available operations:\n");
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("^ : Exponentiation\n");
    printf("r : Square root (will only use first number)\n");

    // Get the first number
    printf("\nEnter first number: ");
    scanf("%lf", &num1);

    // Get the operator
    printf("Enter operator (+, -, *, /, ^, r): ");
    scanf(" %c", &operator);

    // For square root, we don't need second number
    if (operator != 'r') {
        printf("Enter second number: ");
        scanf("%lf", &num2);
    }

    // Perform calculation based on operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '^':
            result = pow(num1, num2);
            printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 'r':
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Square root of %.2lf = %.2lf\n", num1, result);
            } else {
                printf("Error: Cannot calculate square root of a negative number!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}
