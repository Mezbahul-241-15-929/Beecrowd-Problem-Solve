#include<stdio.h>
int main()
{
    float x;
    int n,sum=0;
    for(n=1;n<=6;n++)
    {
        scanf("%f",&x);
        if(x>0)
            sum=sum+1;
    }
    printf("%d valores positivos\n",sum);

}

