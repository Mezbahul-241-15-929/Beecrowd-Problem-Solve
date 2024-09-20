#include <stdio.h>

int main() {
    double num1, num2, num3,A,B,C;
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        A=num1;
        if (num2 >= num3) {

        } else {
            C=num2;
            B=num3;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        A=num2;
        if (num1 >= num3) {
            B=num1;
            C=num3;
        } else {
            printf("Decreasing order: %d %d %d\n", num2, num3, num1);
            B=num3;
            C=num1;
        }
    } else {
        A=num3;
        if (num1 >= num2) {
            B=num1;
            C=num2;
        } else {
            B=num2;
            C=num1;
        }
    }
    printf("%lf %lf %lf\n",A,B,C);

   if(A >= B + C)
   {
       printf("NAO FORMA TRIANGULO\n");
   }
   if(A*A == B*B + C*C)
   {
       printf("TRIANGULO RETANGULO\n");
   }
   if(A*A > B*B + C*C)
   {
       printf("TRIANGULO OBTUSANGULO\n");
   }
   if(A*A < B*B + C*C)
   {
       printf("TRIANGULO ACUTANGULO\n");
   }
   if(A==B && B==C)
   {
       printf("TRIANGULO EQUILATERO\n");
   }
   if(A==B || B==C || C==A)
   {
       printf("TRIANGULO ISOSCELES\n");
   }



    return 0;
}
