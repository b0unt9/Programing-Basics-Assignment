#include <stdio.h>

int main()
{
	int years, days;
	
	scanf("%d", &years);
	
	days = 365*years;
	
	printf("An age of %d years is %d days.\n", years, days);
	
	return 0;
}
