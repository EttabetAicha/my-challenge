#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2,dst;
    printf("Entrez les coordonnees de X1 : ");
    scanf("%lf", &x1);
    printf("Entrez les coordonnees de Y1 : ");
    scanf("%lf", &y1);
    printf("******************\n");
   printf("Entrez les coordonnees de X2 : ");
    scanf("%lf", &x2);-
    printf("Entrez les coordonnees de Y2 : ");
    scanf("%lf", &y2);
    dst = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("La distance entre (%.2lf, %.2lf) et (%.2lf, %.2lf) C'est : %.2lf\n", x1, y1, x2, y2, dst);

    return 0;
}
