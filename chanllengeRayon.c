#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    float r,s;
    const float Pi=3.14;
    printf("veuillez entrer la valeur du rayon");
    scanf("%f",&r);
    s=r*r*Pi;
    printf("laire de cercle est :",s);
    return 0;
}