#include <stdio.h>

int main() {
    char Character;
    printf("saisir une caractere: ");
    scanf(" %c", &Character);
    Character = tolower(Character);//si utilusateur saisir une caractere majuscule
    switch (Character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c est voyelle.\n", Character);
            break;
        default:
            printf("%c n'est pas voyelle.\n", Character);
            break;
    }

    return 0;
}
