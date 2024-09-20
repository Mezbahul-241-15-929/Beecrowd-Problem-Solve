#include <stdio.h>

int main()
{
    int a,i;
    float b, c;

    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        scanf("%f %f", &b, &c);

        if (c == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", b / c);
    }

    return 0;
}