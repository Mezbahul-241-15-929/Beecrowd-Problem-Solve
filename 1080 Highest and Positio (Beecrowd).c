#include<stdio.h>

int main()
{
    int a[100],i,j=0,k;
    for(i=0; i<100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i] > j)
        {
        j=a[i];
        k=i+1;
        }
    }
    printf("%d\n",j);
    printf("%d\n",k);
    
}