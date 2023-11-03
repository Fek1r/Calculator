#include <stdio.h>

int main() {
    double x, y, result;
    char op;

    printf("Введите первое число: ");
    scanf("%lf", &x);
    printf("Введите операцию (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Введите второе число: ");
    scanf("%lf", &y);

    switch (op) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y != 0) {
                result = x / y;
            } else {
                printf("Ошибка: Деление на ноль\n");
                return 1;
            }
            break;
        default:
            printf("Ошибка: Недопустимая операция\n");
            return 1;
    }

    printf("Результат: %lf\n", result);

    return 0;
}

