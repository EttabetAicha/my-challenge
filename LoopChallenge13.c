#include <stdio.h>

int main()
{
    int n;
    printf("saisir une nomber : ");
    scanf("%d", &n);
    printf("multiplication du Nomber %d est:\n\n", n);
    printf("******************\n");
    for (int mult = 1; mult <= 10; mult++)
    {
        int prd = n * mult;
        printf("%d * %d = %d\n", n, mult, prd);
        printf("******************\n");
    }

    return 0;
}
