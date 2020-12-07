#include <stdio.h>

int main(void) {
    long long size, multiply_1 = 1, multiply_2 = 1;
    scanf("%d", &size);

    long long array[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%lld", &array[i][j]);
        }
    }

    for (int i = 0; i < size; i++) {
        multiply_1 *= array[i][i];
    }

    for (int i = 0, j = size - 1; i < size; i++, j--) {
        multiply_2 *= array[i][j];
    }

    printf("%lld", multiply_1 - multiply_2);

    return 0;
}