#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int *array;

int main(void) {
    int input, min = INT_MAX, second_min = INT_MAX;
    
    scanf("%d", &input);

    array = (int *) calloc(input, sizeof(int));

    for (int i = 0; i < input; i++) scanf("%d", &array[i]);

    for (int i = 0; i < input; i++)
    {
        if (array[i] < min) {
            second_min = min;
            min = array[i];
        } else if (array[i] < second_min && array[i] != min) {
            second_min = array[i];
        }
    }

    printf("%d", second_min);

    free(array);

    return 0;
}