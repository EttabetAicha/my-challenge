#include <stdio.h>
 int main(){
   int tab[]={1,2,3,4,5,-6,7,8,9,10};
   int min,max ;
   min =tab[0];
   int size=sizeof(tab)/sizeof(tab[0]);
   for (int i =0 ;i<size;i++){
     if (min>tab[i]){

        min =tab[i];
     }
   }
     printf("le minn est %d\n",min);
   for (int i =0 ;i<size;i++){
     if (min<tab[i]){

        max =tab[i];
     }
   }
     printf("le max est %d",max);

    return 0;
    
   }



    
 