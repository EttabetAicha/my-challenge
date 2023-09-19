#include <stdio.h>
int main()
{
    float note[20];
    int i;
    printf("Saisir des notes entre 0 et 20 :\n");
    for (i = 0; i < note[20]; i++)
    {
        printf("note[%d] = ", i + 1);
        scanf("%f", &note[i]);
        if (note[i] < 0 || note[i] > 20)
        {
            return 0;
        }
    }
    printf("Notes saisies :\n");
    for (i = 0; i < 20; i++)
    {
        printf("note[%d] = %.2f\n", i + 1, note[i]);
    }
    return 0;
}