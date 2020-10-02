#include <stdio.h>

int main()
{
    char input, i, j, k;

    scanf("%c", &input);

    i = 65;

    while(i <= input)
    {
        j = 0;
        k = 65;

        while (j < input-i)
        {
            printf("-");
            j++;
        }

        while (k < i)
        {
            printf("%c", k);
            k++;
        }
        
        while (k >= 65)
        {
            printf("%c", k);
            k--;
        }
        
        printf("\n");

        i++;
    }
    return 0;
}