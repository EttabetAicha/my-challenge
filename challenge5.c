#include<stdio.h>
#include<stdlib.h>
int main()
{

    int a,b,c;
    printf("donnez un entier de 3 chiffres  Necrivez pas le zero dans la drnier chiffre:\n");
    scanf("%d",&a);
    c=a;
    b=(a%10)*100; //TAKE LAST NUMBER
    a=a/10;//TAKE TWO FIRST NUMBER
    b=b+(a%10)*10; //TAKE THE SECOND NUMBER THEN ADD THE VALUE  B TO A
    a/=10;
    b+=a;
    printf("le nombre %d inverse est %d\n",c,b);

    return 0;
}
