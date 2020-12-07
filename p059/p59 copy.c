#include <stdio.h>

int main(void) {
    int sheep_eat, goat_eat, total, feed, sheep_count, goat_count, temp, check = 0;

    scanf("%d %d %d %d", &sheep_eat, &goat_eat, &total, &feed);

    for (int i = 1; i < total; i++) {
        temp = total - i;
        if ((sheep_eat * i + goat_eat * (temp)) == feed) {
            check++;
            sheep_count = i;
            goat_count = temp;
        }
    }

    if (check == 1) printf("%d %d\n", sheep_count, goat_count);
    else printf("-1\n");

    return 0;
}