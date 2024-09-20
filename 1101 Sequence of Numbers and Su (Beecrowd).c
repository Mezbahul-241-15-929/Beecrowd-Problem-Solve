#include<stdio.h>

int main() {
    int a,b,i,j,sum=0;

    for(j=1;j<100;j++)
    {
        scanf("%d%d",&a,&b);
        if(a<=0 || b<=0) return 0;
        if(a>b)
    {
        for(i=b;i<=a;i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("Sum=%d\n",sum);
    }
    else if(a<b)
    {
        for(i=a;i<=b;i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("Sum=%d\n",sum);
    }
    sum=0;
    }

    return 0;
}
