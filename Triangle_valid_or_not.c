#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a+b>=c)
    {
        printf("Valid triangle");
    }
    else if(a+c>=b)
    {
        printf("Invalid triangle");
    }
}