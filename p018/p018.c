#include <stdio.h>

int main()
{
	long long int a, b, c, d;
	unsigned long long int sum = 0;
	scanf("%d %d", &a, &b);
	
	c = a-b;
	d = a+b;
	
	for (; c <= d ; c++)
    {
        sum = sum + c;
    }
    
	printf("%llu", sum);
	return 0;
}
