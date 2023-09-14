#include<stdio.h>
#include<stdlib.h>
int main()
{

    int a,b,c;
    printf("donnez un entier de 3 chiffres  Necrivez pas le zero dans la drnier chiffre:\n");
    scanf("%d",&a);
    c=a;
    b=(a%10)*100; //TAKE LAST NUMBER
    if(b == 0){
        b = (a % 10) * 100 + ((a / 10) % 10) * 10 + (a / 100);
        printf("Le nombre %d inverse est %03d\n", c, b);
    }else{
        b = (a % 10) * 100 + ((a / 10) % 10) * 10 + (a / 100);
    printf("le nombre %d inverse est %d\n",c,b);
}
    return 0;
}

