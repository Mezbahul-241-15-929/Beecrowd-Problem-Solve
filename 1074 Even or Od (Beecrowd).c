#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b==0)
        {
            printf("NULL\n");
        }
        else if(b%2==0)
        {
            if(b>0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("EVEN NEGATIVE\n");
            }
        }
        else
        {
            if(b>0)
            {
                printf("ODD POSITIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
    }
}

