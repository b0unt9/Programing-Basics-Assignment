#include <stdio.h>

int main(void)
{
    int n;
    double np = 1.0f;
    double a = 0.0f, b = 0.0f;

    scanf("%d", &n);

    if (n > 0) {
        for (long i = 1; i <= n; i++)
        {
            a += 1.0/i;
            b += 1.0/i * np;
            np = -np;
        }

        printf("%.5lf %.5lf", a, b);
    }

    return 0;
}