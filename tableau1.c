#include <stdio.h>

int main() {
    int tab[] = {1,2,3,4,5,6,7,8,9,10}; // Initialize the array with a single element, which is 10
    int size=sizeof(tab) / sizeof(tab[0]);
    for (int i = 0; i <size ; i++) {
        printf("%d,", tab[i]);
    }
    
    return 0;
}
