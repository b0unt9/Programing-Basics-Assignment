#include <stdio.h>

int main()
{
	double cups, pints, ounces, teaspoons, tablespoons;
	
	scanf("%lf", &cups);
	
	pints = cups / 2;
	ounces = cups * 8;
	tablespoons = ounces * 2;
	teaspoons = tablespoons * 3;
	
	printf("%lf cups are equivalent to each of the following:\n", cups);
	printf("%lf pints\n", pints);
	printf("%lf tablespoons\n", tablespoons);
	printf("%lf teaspoons\n", teaspoons);
	
	return 0;
}
