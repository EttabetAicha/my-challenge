#include <stdio.h>

int main() {
    int n;
    printf("VERFIER VOTRE NOMBRE : ");
    scanf("%d", &n);
    if (n > 0) {
        printf("POSITIF\n");
    } else if (n < 0) {
        printf("NIGATIF\n");
    } else {
        printf("NULL\n");
    }

    return 0;
}
