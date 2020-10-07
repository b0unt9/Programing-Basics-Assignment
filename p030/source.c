#include <stdio.h>

int main(void)
{
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2) printf("%.3lf\n", (a-b)/(a*b));

    return 0;
}