#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    scanf("%d",&x);
    for(n=2;n<=x;n=n+2)
    {
        int a=pow(n,2);
        printf("%d^2 = %d\n",n,a);
    }

}

