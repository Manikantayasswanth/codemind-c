#include<stdio.h>
int main()
{
    int m,n,i,a;
    scanf("%d%d",&m,&n);
    for(i=1; i<=n; i++)
    {
        a=m*i;
        if(a%n==0)
        {
            printf("%d",m*n/a);
            break;
        }
    }
}