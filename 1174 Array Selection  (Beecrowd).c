#include<stdio.h>

int main()
{
    float a[100];
    int i;
    for(i = 0; i < 100; i++)
    {
        scanf("%f", &a[i]);
        if(a[i]<=10)
            printf("A[%d] = %.1f\n",i,a[i]);
    }
}