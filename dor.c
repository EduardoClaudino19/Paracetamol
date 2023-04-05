#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Digite dois n�meros: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Operador inv�lido");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);

    return 0;
}
