#include <stdio.h>

int main(void)
{
    int input;
    int odd_count = 0, even_count = 0;
    double odd_sum = 0, even_sum = 0, odd_average = 0, even_average = 0;

    while (scanf("%d", &input) == 1 && input != 0)
	{
		if (input % 2 == 0)
		{
			even_sum += input;
			even_count++;
		}
		else
		{
			odd_sum += input;
			odd_count++;
		}
	}

    if (odd_count != 0) odd_average = odd_sum / odd_count;
    if (even_count != 0) even_average = even_sum / even_count;

    printf("%d %.2lf %d %.2lf", even_count, even_average, odd_count, odd_average);

    return 0;
}