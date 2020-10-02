#include <stdio.h>

int main()
{
    int num, i, j;
    
    scanf("%d", &num);

    i = 0;

    while (i<num)
    {
        j = num;

        while (num-i<=j)
        {
            printf("%c", 64+j);
            j--;
        }

        printf("\n");

        i++;
    }

    return 0;
}