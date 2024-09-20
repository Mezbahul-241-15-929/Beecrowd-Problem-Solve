#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&x);
    if(x%2==0)
    {
        for(n=x+1;n<=x+12;n=n+2)
            printf("%d\n",n);
    }
    else
    {
        for(n=x;n<=x+11;n=n+2)
            printf("%d\n",n);
    }
}
