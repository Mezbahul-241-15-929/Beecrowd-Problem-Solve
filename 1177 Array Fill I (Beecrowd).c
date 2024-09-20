#include<stdio.h>

int main()
{
    int a[1000],n,i,j;
    scanf("%d",&n);
    for(i=0,j=0; i<1000; i++,j++)
    {
        a[i]=j;
        printf("N[%d] = %d\n",i,j);
        if(j==n-1)
            j=-1;
    }
}