#include<stdio.h>

int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=1;i<a*4;i+=4)
    {
    printf("%d %d %d PUM\n",i,i+1,i+2);
    }
}