#include<stdio.h>
int main()
{
    float x,avg,n,sum=0,total=0;
    for(n=1;n<=6;n++)
    {
        scanf("%f",&x);
        if(x>0)
        {
            sum=sum+1;
            total=total+x;
        }
    }
    avg=total/sum;
    printf("%.0f valores positivos\n",sum);
    printf("%.1f\n",avg);

}


