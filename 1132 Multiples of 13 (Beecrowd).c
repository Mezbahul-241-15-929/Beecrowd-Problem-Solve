#include<stdio.h>

int main()
{
    int a, b, i, sum = 0;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++)
    {
        if (i % 13 != 0)
            sum += i;
    }

    printf("%d\n", sum);

    return 0;
}