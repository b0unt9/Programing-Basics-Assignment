#include <stdio.h>

int main(void)
{
    int a, b, check;

	while(check = scanf("%d %d", &a, &b), check == 2 && a < b)
	{
        int sum = 0;

	    for (int i = a; i <= b; i++) sum += i * i;
        
		printf("%d\n", sum);
	}

    return 0;
}