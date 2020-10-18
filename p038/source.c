#include <stdio.h>

int main(void)
{
    char input;
    int count = 0, term = 0;

    while((input = getchar()) != '#')
    {
        if (input == 'e') term = 1;
        else if (input == 'i' && term == 1)
        {
            count++;
            term = 0;
        } 
        else term = 0;
    }

    printf("%d", count);

    return 0;
}