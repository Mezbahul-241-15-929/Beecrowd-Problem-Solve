#include<stdio.h>
int main()
{
    float a,avg,sum=0,count=0;
    while(1)
    {
        if(count==2)
        {
            break;
        }
        scanf("%f",&a);
        if(a>=0 && a<=10)
        {
            count++;
            sum+=a;
        }
        else
            printf("nota invalida\n");
    }
    avg=sum/2;
    printf("media = %.2f\n",avg);

}
