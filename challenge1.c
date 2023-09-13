#include <stdio.h>

int challenge1() {
    int age;
    long number;
    char sexe, nom[10], prenom[10];

    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prenom : ");
    scanf("%s", prenom);

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez votre numero  : ");
    scanf("%14d", &number);

    printf("Entrez votre gender : ");
    scanf(" %c", &sexe);
   //POUR AFFICHER LA RESULT DE SAISIR
    printf("\nVotre Informations  :\n");
    printf("Votre Nom et : %s Votre Pr�nom : %s Votre Age et  %d votre numero: %lld Votre Gender : %c",nom,prenom,age,number,sexe );

    return 0;
}

