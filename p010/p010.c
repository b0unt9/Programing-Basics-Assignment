#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	double a, b, c, d, e;
	
	scanf("%lf", &a);
	
	b = a / 2;
	c = a * 8;
	e = c * 2;
	d = e * 3;
	
	printf("%lf cups are equivalent to each of the following:\n", a);
	printf("%f pints\n", b);
	printf("%f tablespoons\n", e);
	printf("%f teaspoons\n", d);
	
	return 0;
}
