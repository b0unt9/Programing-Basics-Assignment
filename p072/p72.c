#include <stdio.h>

int compare(int a, int b) {
	return a > b ? a : b;
}

int size_x, size_y, res = 0;

int result_x[501][501] = {0};
int result_y[501][501] = {0};
char input[500][502] = {0};

int main(void) {
    scanf("%d %d", &size_x, &size_y);

    for (int i = 0; i < size_x; i++) {
        scanf("%s", &input[i]);
    }

    for (int i = 1; i <= size_x; i++) {
        for (int j = 1; j <= size_y; j++) {
            if (input[i-1][j-1] == '1') result_x[i][j] = 1 + compare(result_x[i][j-1], result_x[i][j]);
			res = res > result_x[i][j] ? res : result_x[i][j];
        }
    }

    for (int i = 1; i <= size_y; i++) {
        for (int j = 1; j <= size_x; j++) {
            if (input[j-1][i-1] == '1') result_y[j][i] = 1 + compare(result_y[j-1][i], result_y[j][i]);
			res = res > result_y[j][i] ? res : result_y[j][i];
        }
    }

    printf("%d\n", res);

    return 0;
}