#include <stdio.h>

int main() {
    double moy;
    printf("saisir votre mmyenne: ");
    scanf("%lf", &moy);
    if (moy < 10) {
        printf("recalé\n");
    } else if (moy >= 10 && moy < 12) {
        printf("mention passable\n");
    } else if (moy >= 12 && moy < 14) {
        printf("mention assez bien\n");
    } else if (moy >= 14 && moy < 16) {
        printf("mention bien\n");
    } else {
        printf("mention très bien\n");
    }

    return 0;
}
