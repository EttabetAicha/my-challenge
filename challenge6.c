#include <stdio.h>

int main() {
    int n;
    printf("Saisir une nomber entier: ");
    scanf("%d", &n);
    printf("La valeur en octal est : %o\n", n);
    printf("La valeur en hexadécimal est : %X\n", n);

    return 0;
}
