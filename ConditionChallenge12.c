#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));// pseudo-random & initialiser le g�n�rateur de nombres al�atoires
    int Nrandom = rand() % 7;
    char days[][13] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi","Dimanche",};
    printf("Le jour de la semaine aleatoire est : %s\n", days[Nrandom]);

    return 0;
}
