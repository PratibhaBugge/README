#include <stdio.h>
#include <conio.h>

void add(double a, double b) {
    printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
}

void subtract(double a, double b) {
    printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
}

void multiply(double a, double b) {
    printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
}

void divide(double a, double b) {
    if (b != 0) {
        printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
    } else {
        printf("Error! Division by zero.\n");
    }
}

int main() {
    int choice;
    double num1, num2;

    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    while (1) {
        printf("Enter choice (1/2/3/4): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);

            switch (choice) {
                case 1:
                    add(num1, num2);
                    break;
                case 2:
                    subtract(num1, num2);
                    break;
                case 3:
                    multiply(num1, num2);
                    break;
                case 4:
                    divide(num1, num2);
                    break;
            }

            char next_calculation;
            printf("Do you want to perform another calculation? (y/n): ");
            scanf(" %c", &next_calculation);
            if (next_calculation == 'n') {
                break;
            }
        } else {
            printf("Invalid input! Please enter a valid choice.\n");
        }
    }

    return 0;
}

