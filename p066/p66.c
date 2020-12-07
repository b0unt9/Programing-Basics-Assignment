#include <stdio.h>

int main(void) {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d %d\n", a*c - b*d, b*c + a*d);

    if (c*c + d*d != 0) {
        printf("%.2f %.2f", (a*c + b*d)/(double) (c*c + d*d), (b*c - a*d)/(double) (c*c + d*d));
    } else {
        printf("NONE");
    }

    return 0;
}