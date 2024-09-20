#include<stdio.h>

int main()
{
    int a,i,sum=0;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        else
        {
            if(a%2==0)
            {
                for(i=a; i<=a+8; i+=2)
                {
                    sum+=i;
                    //printf("%d ",i);
                }
                printf("%d\n",sum);

            }
            
            else if(a%2!=0)
            {
                for(i=1+a; i<=a+9; i+=2)
                {
                    sum+=i;
                    //printf("%d ",i);
                }
                printf("%d\n",sum);
            }
            sum=0;
        }
    }


}