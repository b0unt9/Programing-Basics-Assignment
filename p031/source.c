#include <stdio.h>

int main(void)
{
    int a, b;

	while(scanf("%d %d", &a, &b) == 2 && a < b)
	{
        int sum = 0;

	    for (int i = a; i <= b; i++) sum += i * i;
        
		printf("%d\n", sum);
	}

    return 0;
}