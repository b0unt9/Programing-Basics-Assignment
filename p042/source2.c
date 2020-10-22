#include <stdio.h>

int main(void) {
    long long times, i = 0, count, weight, a = 0, b = 0, c = 0;
    char vegetable[2];
    double result;

    scanf("%lld", &times);

    for(int i=0; i<times; i++)
    {
        scanf("%s %lld", vegetable, &count);
    
        switch (vegetable[0]) {
            case 'a':
                a += count;
                break;

            case 'b':
                b += count;
                break;

            case 'c':
                c += count;
                break;
        }
    }

    result = a * 2.05 + b * 1.15 + c * 1.09;

    weight = a + b + c;

    if (result >= 100.0) result *= 0.95;

    if (weight < 5) result += 6.50;
    else if (weight >= 5 && weight < 20) result += 14.00;
    else result = result + 14.00 + weight * 0.50;

    printf("%.2lf", result);

    return 0;
}