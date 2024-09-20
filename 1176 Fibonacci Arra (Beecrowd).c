#include<stdio.h>
int main()
{
    int b,n,i;
    long long int a[60];
    a[0]=0;
    a[1]=1;
    scanf("%d",&n);
    for(i=2;i<=60;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        printf("Fib(%d) = %lld\n",b,a[b]);
    }
}
