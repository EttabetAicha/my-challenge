#include <stdio.h>
int main()
{
    int i, j, r;
    printf("Enter le nombre des ligne: ");
    scanf("%d", &r);
    if (r > 0)
    {
        for (i = 1; i <= r; ++i)
        {
            for (j = 1; j <= r - i; ++j)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; ++j)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (r < 0)
    {
        r = -r;
        for (i = r; i >= 1; --i)
        {
            for (j = 1; j <= r - i; ++j)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; ++j)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
