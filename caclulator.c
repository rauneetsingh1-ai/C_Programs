#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // space before %c to ignore newline character

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
