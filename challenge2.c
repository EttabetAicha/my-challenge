#include <stdio.h>

int main() {
    float f, c;
    printf("Entrez la temperature en Fahrenheit : ");
    scanf("%f", &f);
    c = (f - 32) / 1.8;
    printf("La temperature en degre Celsius est : %.2f Celsius\n", c);
    if (c <= 0) {
        printf(" la sensation ressentie : Tres froid\n");
    } else if (c <= 20) {
        printf(" la sensation ressentie: Froid\n");
    } else if (c <= 30) {
        printf(" la sensation ressentie : Chaud\n");
    } else {
        printf(" la sensation ressentie : Tres chaud\n");
    }

    return 0;
}
