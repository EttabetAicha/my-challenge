#include <stdio.h>
 int main(){
    int largeur ,longeur,surface,perimetre ;
    printf("entrer la valeur du longeur:");
    scanf("%d",&largeur);
    printf("entrer la valeur du largeur:");
    scanf("%d",&longeur);
    perimetre=2*(largeur*longeur);
    surface=largeur+longeur;
    printf("le perimetre de rectangle est :%.3f",perimetre);
    printf("la psurface de rectangle est :%.3f",surface);
    return 0;



    
 }