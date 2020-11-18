#include  <stdio.h>

int main(void) {
    int input;
    long long array[100000];

    scanf("%d", &input);

    array[1] = 2;

    for (int i = 2; i <= input; ++i) {
        if (i % 2 == 0) {
            array[i] = array[i - 1];
        } else {
            array[i] = (array[i - 1] * 2) % 16769023;
        }
    }

    printf("%d", array[input]);

    return 0;
}