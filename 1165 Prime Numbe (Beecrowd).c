#include<stdio.h>

int main()
{
    int a,i,j,n,s=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        for(j=1; j<=a; j++)
        {
            if(a%j==0)
            {
                s++;
            }
        }
        if(s==2)
        {
        printf("%d eh primo\n",a);
        }
        else
        {
        printf("%d nao eh primo\n",a);
        }
        s=0;
    }
}