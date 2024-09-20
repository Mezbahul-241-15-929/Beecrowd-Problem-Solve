#include<stdio.h>

int main()
{
    int b,n,i,small;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(i==0 || a[i] < small)
        {
            small=a[i];
            b=i;
        }
    }
    printf("Menor valor: %d\n",small);
    printf("Posicao: %d\n",b);
}