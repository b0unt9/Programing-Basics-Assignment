#include <stdio.h>

double H(double x[], int n);

int main(void)
{
    int n;
    double x[1000] = {0,};

    while(scanf("%d", &n) && n > 0) {
        for(int i = 0; i < n; i++) scanf("%lf", &x[i]);
        printf("%.3lf\n", H(x, n));
    }

    return 0;
}

double H(double x[], int n) {
    double result = 0;

    for (int i = 0; i < n; i++) {
        result += 1 / x[i];
    }

    result = n / result;

    return result;
}