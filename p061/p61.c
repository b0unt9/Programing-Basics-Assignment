#include <stdio.h>

int array[1000][1000];

int main(void) {
    int size_x, size_y;
    int produce_num, produce_count, produce_count_result = 0;
    int produce_day, produce_day_count, produce_day_count_result = 0;

    scanf("%d %d", &size_y, &size_x);

    for (int i = 0; i < size_y; i++) {
        for (int j = 0; j < size_x; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < size_y; i++) {
        produce_count = 0;
        for (int j = 0; j < size_x; j++) {
            produce_count += array[i][j];
        }
        if (produce_count >= produce_count_result) {
            produce_num = i + 1;
            produce_count_result = produce_count;
        }
    }

    for (int i = 0; i < size_x; i++) {
        produce_day_count = 0;
        for (int j = 0; j < size_y; j++) {
            produce_day_count += array[j][i];
        }
        if (produce_day_count >= produce_day_count_result) {
            produce_day = i + 1;
            produce_day_count_result = produce_day_count;
        }
    }

    printf("%d %d\n%d %d", produce_num, produce_count_result, produce_day, produce_day_count_result);

    return 0;
}