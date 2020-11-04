#include <stdio.h>

int Fibonacci(int n);

int main(void)
{
	int n;

    scanf("%d", &n);
    printf("%d", Fibonacci(n));
    
    return 0;
}

int Fibonacci(int n)
{
    unsigned long long fn = 0, fn1 = 1, fn2;
    int count = 0;

	for (int i = 1; i <= n; i++)
	{
		fn2 = fn1;
		fn1 = fn;
		fn = fn1 + fn2;
        if (fn%2 == 1) count++;
	}

    return count;
}