#include <stdio.h>
#include<stdbool.h>

int fun(int n, bool v, bool w);
int main(void) {
    int a, b, c, count = 0;
    bool a1, a2, a3, a4, a5, sum1, sum2, sum3, sum4, sum5, sum6 = false;
    scanf("%d %d %d", & a, & b, & c);

    int i = 1;
    for (i; i <= 4; i++) {

        if (i < 3) a1 = true;
        else a1 = false;

        if (i % 2 == 0) a2 = true;
        else a2 = false;

        sum1 = fun(a, a1, a2);
        int i2 = 1;
        for (i2; i2 <= 2; i2++) {
            if (i2 == 1) a3 = true;
            else a3 = false;
            int i3 = 1;
            for (i3; i3 <= 4; i3++) {

                if (i3 < 3) a4 = true;
                else a4 = false;

                if (i3 % 2 == 0) a5 = true;
                else a5 = false;

                sum2 = fun(4, a3, a4);

                sum3 = fun(b, a4, a5);

                sum4 = fun(3, sum1, sum2);

                sum5 = fun(c, sum2, sum3);

                sum6 = fun(5, sum4, sum5);

                if (sum6) count++;

            }
        }
    }
    printf("%d ", count);
    return 0;
}
int fun(int n, bool v, bool w) {

    if (n == 1) {
        if (v || w) v = true;
        else v = false;
    } else if (n == 2) {
        if (v && w) v = true;
        else v = false;
    } else if (n == 3) {
        if (v == false && w == false) v = true;
        else v = false;
    } else if (n == 4) {
        if (v == true && w == true) v = false;
        else v = true;
    } else if (n == 5) {
        if (v ^ w) v = true;
        else v = false;
    }

    return v;
}