#include <stdio.h>

int main() {
    int a, b;
    printf("saisir la valeur a : ");
    scanf("%d", &a);
    printf("saisir la valeur b : ");
    scanf("%d", &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %.2f\n", (float) a / b);
    printf("a %% b = %d\n", a % b);


    return 0;
}
