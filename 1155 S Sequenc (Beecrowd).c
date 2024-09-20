#include<stdio.h>

int main()
{
    float a,b,i,sum=0;
    for(i=1;i<=100;i++)
    {
    b=1/i;
    sum+=b;
    }
    printf("%.2f\n",sum);
}