#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main (){
    time_t year;
    time_t currentime;
    struct tm* timeInfo;
    time(&currentime);
    timeInfo=localtime(&currentime);
    int currentyear=timeInfo->tm_year+1900;
    printf("saisir votre date de naissance:");
    scanf("%d",&year);
    int age=currentyear-year;
    printf("votre age est %d",age);
    return 0;
 }