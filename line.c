#include <stdio.h>
#include <math.h>


int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%.0f", fabs(b - a));
    return 0;
}