#include <stdio.h>

int main() {
    double moy;
    printf("saisir votre mmyenne: ");
    scanf("%lf", &moy);
    if (moy < 10) {
        printf("recale\n");
    } else if (moy >= 10 && moy < 12) {
        printf("mention passable\n");
    } else if (moy >= 12 && moy < 14) {
        printf("mention assez bien\n");
    } else if (moy >= 14 && moy < 16) {
        printf("mention bien\n");
    } else {
        printf("mention tres bien\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix;
    printf(" =========================================== \n");
    printf(" Menu d’application  \n");
    printf(" ======================================== \n");
    printf("[1]afficher les donnees \n");
    printf("[2]ajouter une deonnee \n");
    printf("[3]rechecher sur une donee \n");
    printf("[4]rechecher sur les donee repetes \n");
    printf("[5]genere les wordlist \n");
    printf("[6]genere le wordlist dans un fichier .txt //un bonus \n");
    printf("[7]afficher les donnees de type entier //bonus  \n");
    printf(" ====================================== \n");
    printf("taper votre choix:");
    scanf("%d",&choix);
    return 0;
}

