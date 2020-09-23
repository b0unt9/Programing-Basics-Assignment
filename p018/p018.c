#include <stdio.h>

int main()
{
	long long int a, b, c, d;
	long long int sum = 0;
	scanf("%lld %lld", &a, &b);
	
	c = a - b;
	d = a + b;
	
	for (; c<=d ; c++)
    {
        sum = sum + c;
    }
    
    
    
	printf("%lld", sum);
	return 0;
}
