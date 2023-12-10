#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int hasFactor=0;
    if(number%3==0)
    {
        printf("Pling");
        hasFactor=1;
    }
    if(number%5==0)
    {
        printf("Plang");
        hasFactor=1;
    }
    if(number%7==0)
    {
        printf("Plong");
        hasFactor=1;
    }
    if(!hasFactor)
    {
        printf("%d",number);
    }
}