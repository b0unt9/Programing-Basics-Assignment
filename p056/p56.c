#include <stdio.h>

int main(void) {
    int input, result = 1;

    scanf("%d", &input);

    input++;
    input /= 2;

    for (int i = 0; i < input; ++i) {
        result *= 2;
        result %= 16769023;
    }

    printf("%d", result);

    return 0;
}