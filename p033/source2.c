#include <stdio.h>

int main(void)
{
    int n;
    double a = 0.0f, b = 0.0f, np;

    scanf("%d", &n);

    if (n > 0) {
        for (long i = 1; i <= n; i++)
        {
            if ( i%2==0 ) np = -1.0f;
            else np = 1.0f;
            a += 1.0/i;
            b += 1.0/i * np;
        }

        printf("%.5lf %.5lf", a, b);

    } else {
        return 0;
    }

    return 0;
}