#include <stdio.h>

int main()
{
    // Read input values
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // Check if the input values form a triangle
    if (A < B + C && B < A + C && C < A + B)
    {

        // Check triangle type
        if (A == B && B == C)
        {
            printf("Valido-Equilatero\n");
        }
        else if (A != B && B != C && A != C)
        {
            printf("Valido-Escaleno\n");
        }
        else
        {
            printf("Valido-Isoceles\n");
        }

        // Check if it's a right-angled triangle
        if (A * A == B * B + C * C || B * B == A * A + C * C || C * C == A * A + B * B)
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    else
    {
        printf("Invalido\n");
        //printf("A(%d) < B + C (%d)\n",A,B+C);
        //printf("A(%d) < A + C (%d)\n",B,A+C);
        //printf("A(%d) < B + C (%d)\n",C,A+B);
    }

    return 0;
}

