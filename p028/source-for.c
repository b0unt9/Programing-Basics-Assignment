#include <stdio.h>

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);

    for (; a <= b; a++)
    {
        printf("%d %d %d\n", a, a*a, a*a*a);
    }

    return 0;
}