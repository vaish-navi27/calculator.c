#include <stdio.h>

void calculate() {
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return;
            }
            result = num1 / num2; 
            break;
        default:
            printf("Invalid operator.\n");
            return;
    }

    printf("Result: %.2lf\n", result);
}

int main() {
    char choice;
    do {
        calculate();
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y' || choice == 'Y');
    
    return 0;
}
