#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=0,b=1,c=a+b;
    int k=2;
    printf("%d %d ",a,b);
    while(k<n)
    {
        printf("%d ",c);
        k++;
        a=b;
        b=c;
        c=a+b;
    }
}