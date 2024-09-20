#include<stdio.h>
int main()
{
    int i,j,a,b,c,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d %d",&b,&c);
        if(b<c)
        {
            for(j=b+1;j<c;j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
        else
        {
            for(j=c+1;j<b;j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
    }
}





