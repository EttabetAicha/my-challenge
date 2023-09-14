#include <stdio.h>

int main() {
    char caractere;
    printf("Entrez un caractère : ");
    scanf(" %c", &caractere);
    if (caractere >= 65 && caractere <= 90) {// 65 90 CEST CPDE ASCII DES LETTRE MAJ
        printf("%c est une lettre majuscule.\n", caractere);
    } else {
        printf("%c n'est pas une lettre majuscule.\n", caractere);
    }

    return 0;
}
