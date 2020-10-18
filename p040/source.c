#include <stdio.h>

int main(void)
{
    long long input, i, count = 0;

    scanf("%lld", &input);

    for(i = 2; i*i <= input; i++)
    {
        if(input%i==0) if(i*i == input) count++;
        else count += 2;
    }

    printf("%lld", count);

    return 0;
}