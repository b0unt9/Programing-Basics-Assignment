#include <stdio.h>

int main(void)
{
    int text[1000] = {0,};
    int times;

    scanf("%d", &times);

    for (int i = 0; i < times; i++) scanf("%d", &text[i]);

    for (int j = times - 1; j >= 0; j--) printf("%d ", text[j]);

    return 0;
}