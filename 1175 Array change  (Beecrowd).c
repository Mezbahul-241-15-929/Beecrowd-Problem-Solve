#include<stdio.h>

int main()
{
    int a[20], i, j;

    for(i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0, j = 19; i < 20; i++, j--)
    {
        printf("N[%d] = %d\n", i, a[j]);
    }

    return 0;
}