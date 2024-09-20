#include<stdio.h>

int main()
{
    double a[100],n;
    int i;
    scanf("%lf",&n);
    a[0]=n;
    printf("N[0] = %.4lf\n",a[0]);
    for(i=1; i<100; i++)
    {
        a[i]=a[i-1]/2;
        printf("N[%d] = %.4lf\n",i,a[i]);
    }
}