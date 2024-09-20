#include<stdio.h>

int main()
{
    int a,b,c=0,i;
    scanf("%d %d",&a,&b);
    for(i=1; i<=b; i++)
    {
        c++;
        printf("%d",i);
        if(c==a || i==b)
        {
            printf("\n");
            c=0;
        }
        else {
            printf(" ");
        }

    }


}