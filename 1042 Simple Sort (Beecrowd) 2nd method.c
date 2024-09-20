#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int large = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int mid = (a > b) ? ((a > c) ? ((b > c) ? b : c) : a) : ((b > c) ? ((a > c) ? a : c) : b);
    int low = (a > b) ? ((a > c) ? ((b > c) ? c : b) : c) : ((b > c) ? a : ((a > c) ? c : a));

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", large, mid, low, low, mid, large);

    return 0;
}
