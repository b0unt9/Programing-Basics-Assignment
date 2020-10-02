#include <stdio.h>

int main()
{
    char input, i, j, k;

    scanf("%c", &input);

    for(i=65; i<=input; i++)
    {
        for (j=0; j<input-i; j++)
	    {
		    printf("-");
	    }

        for (k=65; k<i; k++)
        {
            printf("%c", k);
        }

        for (; k>=65; k--)
        {
            printf("%c", k);
        }
        
        printf("\n");
    }
    return 0;
}