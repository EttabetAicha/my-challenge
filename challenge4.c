#include <stdio.h>

int main() {
    float a, b, c, d,somme, moyenne;;
    printf("saisir a : ");
    scanf("%f", &a);
    printf("saisir b : ");
    scanf("%f", &b);
    printf("saisir c : ");
    scanf("%f", &c);
    printf("saisir d : ");
    scanf("%f", &d);
    somme = a + b + c + d;
    printf("La somme est: %.1f\n", somme);
    moyenne = somme / 4;
    printf("La moyenne est: %.3f\n", moyenne);
    return 0;
}
