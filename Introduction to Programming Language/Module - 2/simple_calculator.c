#include <stdio.h>

int main() {
    float a, b;
    char op;

    scanf("%f %c", &a, &op);
    scanf(" %f", &b);

    if (op == '+') {
        printf("%.2f\n", a + b);
    } else if (op == '-') {
        printf("%.2f\n", a - b);
    } else if (op == '*') {
        printf("%.2f\n", a * b);
    } else if (op == '/') {
        if (b == 0) {
            printf("Error: Division by zero\n");
        } else {
            printf("%.2f\n", a / b);
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}