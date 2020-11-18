#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(void) {
    int input;
    
    scanf("%d", &input);

    int *array = (int *) calloc(input, sizeof(int));

    for (int i = 0; i < input; i++) {
        scanf("%d", &array[i]);
    }

    qsort(array, input, sizeof(int), compare);

    if (input % 2 == 0) {
        float result = (array[input/2] + array[input/2-1]) / 2.0;
        printf("%.1f", result);
    } else {
        int result = array[input/2];
        printf("%d", result);
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    if (*(int *)a < *(int *)b) return -1;
    if (*(int *)a > *(int *)b) return 1;
    return 0;
}