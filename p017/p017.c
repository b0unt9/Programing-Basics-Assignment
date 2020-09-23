#include <stdio.h>

const int TIME = 60;

int main()
{
	int min;
	scanf("%d", &min);
	
	while (min > 0)
	{
		printf("Time in minute(s):%5d = %d hour(s) and %d minute(s)\n", min, min/TIME, min%TIME);
		scanf("%d", &min);
	};
	
	return 0;
}
