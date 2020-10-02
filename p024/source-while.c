#include <stdio.h>

int main()
{
    int num, i, j;

    scanf("%d", &num);

    i = 0;

    while (i < num)
    {
        j = 0;

        while (j <= i)
        {
            printf("$");
            j++;
        }

        i++;

        printf("\n");
    }

    return 0;
}