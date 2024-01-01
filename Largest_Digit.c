#include<stdio.h>
int main()
{
    int i,n,d,ld=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(d>ld)
        {
            ld=d;
        }
        n=n/10;
    }
    printf("%d",ld);
    
}