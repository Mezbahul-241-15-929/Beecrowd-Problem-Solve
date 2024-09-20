#include<stdio.h>

int main()
{
    int a;
    float sum=0,total=0,avg;
    while(1)
    {
        scanf("%d",&a);
        if(a<0)
            break;
        else
        {
            sum=sum+a;
            total++;
        }
    }
    avg=sum/total;
    //printf("%.2f\n",sum);
    //printf("%.2f\n",total);
    printf("%.2f\n",avg);
}