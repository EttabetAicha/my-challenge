#include <stdio.h>

int main() {
    int n1, n2;
    int total, res;
    printf("saisir  n1: ");
    scanf("%d", &n1);
    printf("saisir n2: ");
    scanf("%d", &n2);
    total = n1 + n2;
    if (n1 == n2) { // VERFIER SI LES DEUX NUMBER EST IDENTIQUES
        res = 3 * total;
        printf("les nombre c'est identiques donc la somme est  %d\n", res);//LA RESULTAT *3
    } else {
        printf("Les deux n'est pas identiques donc la somme est : %d\n", total);// LA RESULTAT NORMAL
    }

    return 0;
}
