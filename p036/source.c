#include <stdio.h>

int main(void)
{
    char ch;
    int space = 0, newline = 0, other = 0;

    while ((ch = getchar()) != '#')
	{
		if (ch == ' ') space++;
		else if (ch == '\n') newline++;
		else other++;
	}

    printf("%d %d %d\n", space, newline, other);

    return 0;
}