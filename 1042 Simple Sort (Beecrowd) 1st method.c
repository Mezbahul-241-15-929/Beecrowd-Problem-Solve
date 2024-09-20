#include<stdio.h>

int main() {
    int a, b, c, large, mid, low,d,e,f;

    scanf("%d%d%d", &a, &b, &c);
    d=a;
    e=b;
    f=c;

    if(a>b && b>c)
    {
        if(a>c)
        {
            large=a;
            mid=b;
            low=c;
        }
        else
        {
            mid=c;
            low=b;
        }
    }
    else if(b>a && b>c)
    {
        large=b;
        if(c>a)
        {
            mid=c;
            low=a;
        }
        else
        {
            mid=a;
            low=c;
        }
    }
    else
    {
        large=c;
        if(a>b)
        {
            mid=a;
            low=b;
        }
        else
        {
            mid=b;
            low=a;
        }
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", low, mid, large,d,e,f);
    printf("\n");

    return 0;
}
