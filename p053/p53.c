#include <stdio.h>

unsigned long long Fibonacci(int n);

int main(void)
{
	int n;

    while(scanf("%d", &n) == 1 && n >= 0) printf("#%d: %llu\n", n, Fibonacci(n));

	return 0;
}

unsigned long long Fibonacci(int n)
{
    unsigned long long fn = 0, fn1 = 1, fn2;

	for (int i = 1; i <= n; i++)
	{
		fn2 = fn1;
		fn1 = fn;
		fn = fn1 + fn2;
	}

    return fn;
}