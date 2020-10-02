#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, num, i;
    long long sum = 0;
    
    scanf("%d", &size);

    i = 0;

    while (i<size)
    {
        scanf("%d", &num);
        sum += num;
        i++;
    }
    
    printf("%lld", sum);

    return 0;
}