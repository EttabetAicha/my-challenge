#include <stdio.h>

int main()
{
    int num1, num2;
    int result;
    char op;

    printf("saisir la premier numero: ");
    scanf("%d", &num1);

    printf("saisir la deuxiem numero: ");
    scanf("%d", &num2);

    printf("Choisir votre operateur (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %d", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %d", result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d", result);
        break;
    case '/':
        result = num1 / num2;
        printf("Result: %d", result);
        break;
    default:
        printf("Error");
        break;
    }

    return 0;
}
