#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", & a, & b);
    char array[a][b];
    int i = 0, count = 0;
    int big = 0;
    int ok = 1;
    for (i = 0; i < a; i++) {
        scanf("%s", array[i]);
        int i2 = 0;
        for (i2; i2 < b; i2++) {
            if (array[i][i2] != '1') {
                ok = 0;
                count = 0;
            } else if (array[i][i2] == '1') ok = 1;

            if (ok == 1 && array[i][i2] == '1') {
                count++;
                if (count > big) big = count;
            }
        }
        count = 0;
    }
    ok = 1;
    count = 0;
    for (i = 0; i < b; i++) {
        int i2 = 0;
        for (i2; i2 < a; i2++) {
            if (array[i2][i] != '1') {
                ok = 0;
                count = 0;
            } else if (array[i2][i] == '1') ok = 1;
            if (ok == 1 && array[i2][i] == '1') {
                count++;
                if (count > big) big = count;
            }

        }
        count = 0;
    }
    printf("%d", big);

    return 0;
}