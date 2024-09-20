#include<stdio.h>
int main()
{
    int test,code,amount;

    double price,tcost=0;
    scanf("%d",&test);

    for(int i=1;i<=test;i++)
    {
        scanf("%d %d", &code, &amount);

        if(code==1001)
        {
            tcost += amount*1.50;
        }
        else if(code==1002)
        {
            tcost += amount*2.50;
        }
        else if(code==1003)
        {
            tcost += amount*3.50;
        }
        else if(code==1004)
        {
            tcost += amount*4.50;
        }
        else if(code==1005)
        {
            tcost += amount*5.50;
        }

    }
    printf("%.2lf\n",tcost);

}
