#include<stdio.h>

int main()
{
    int a[10],i,n;
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        a[i]=n;
        printf("N[%d] = %d\n",i,a[i]);
        n*=2;

    }

}