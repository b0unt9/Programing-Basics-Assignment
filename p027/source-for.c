#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, num;
    long long sum = 0;
    
    scanf("%d", &size);

    for (int i=0; i<size; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("%lld", sum);

    return 0;
}