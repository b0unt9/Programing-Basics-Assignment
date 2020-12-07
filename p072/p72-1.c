#include <stdio.h>

char input[500][501] = {0};

int main(void) {
    int size_x, size_y, res = 0;

    scanf("%d %d", &size_x, &size_y);

    for (int i = 0; i < size_x; i++) {
        scanf("%s", &input[i]);
    }

    for (int i = 0; i < size_x; i++) {
        int ck = 1, cnt = 0;
        for (int j = 0; j < size_y; j++) {
            if (input[i][j] == '1') ck = 1;
			else ck = cnt = 0;
            
            if (ck && input[i][j] == '1') {
                res = res > ++cnt ? res : cnt;
            }
        }
    }

    for (int i = 0; i < size_y; i++) {
        int ck = 1, cnt = 0;
        for (int j = 0; j < size_x; j++) {
            if (input[j][i] == '1') ck = 1;
			else ck = cnt = 0;

            if (ck && input[j][i] == '1') {
                res = res > ++cnt ? res : cnt;
            }
        }
    }

    printf("%d\n", res);

    return 0;
}