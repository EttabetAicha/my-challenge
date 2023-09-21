#include <stdio.h>
 int main(){
   int tab[10];
   int n,x;
   int size=sizeof(tab)/sizeof(tab[0]);
   for (int i=0;i<size;i++){
   printf("entrer les element :");
     scanf("%d",&tab[i]);
    }
   printf("saisir un nombre :");
   scanf("%d",&n);
   x=0;
   for(int i=0;i<10;i++){
    if (tab[i]==0)
      x++;
   }
   if (x==0)
     printf("%d ne se trouve pas dans le tableau\n",n);
   else
     printf("%d  se trouve pas dans le tableau\n",n);


    return 0;
    
   }



    
 