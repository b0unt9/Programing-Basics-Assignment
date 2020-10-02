#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    for(int i=0; i<num; i++)
    {
        for(int j=num; num-i<=j; j--)
        {
            printf("%c", 64+j);
        }

        printf("\n");
    }

    return 0;
}