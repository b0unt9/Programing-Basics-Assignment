#include <stdio.h>

int main()
{
	long long int n, m, a, b;
	long long int sum = 0;
	
	scanf("%lld %lld", &n, &m);

	a = n - m;
	b = n + m;
	
	for (; a<=b; a++)
    {
        sum = sum + a;
    }
    
	printf("%lld", sum);
	return 0;
}
