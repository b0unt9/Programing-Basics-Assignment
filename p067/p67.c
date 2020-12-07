#include <stdio.h>

int compare(int input, int max);

int main(void) {
    int input, max = -1000000;

    while (scanf("%d", &input) != EOF) {
        max = compare(input, max);
    }

    printf("%d", max);

    return 0;
}

int compare(int input, int max) {
    if (input > max) max = input;
    return max;
}