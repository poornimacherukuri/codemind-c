#include<stdio.h>
int main()
{
    int n,b=12,i;
    scanf("%d",&n);
    for(i=1;i<=b;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
