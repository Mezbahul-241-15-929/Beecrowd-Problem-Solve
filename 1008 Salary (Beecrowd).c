#include <stdio.h>

int main() {

    float number, hour, amount;
    scanf("%f %f %f",&number, &hour, &amount);
    float sallary=hour*amount;
    printf("NUMBER = %.0f\nSALARY = U$ %.2f\n",number,sallary);
    return 0;
}
