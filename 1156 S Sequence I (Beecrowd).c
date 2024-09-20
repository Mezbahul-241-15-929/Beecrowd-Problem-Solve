#include<stdio.h>

int main()
{
    float a,b,i,j=1,sum=0;
    for(i=1;i<=37;i+=2)
    {
    b=i/j;
    j=j*2;
    sum+=b;
    }
    printf("%.2f\n",sum);
}