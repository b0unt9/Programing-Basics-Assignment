#include <stdio.h>

double harmonic(double i, double j);

int main(void)
{
	double i, j;

	while (scanf("%lf %lf", &i, &j) == 2) 
        printf("%.3lf\n", harmonic(i, j));

	return 0;
}

double harmonic(double i, double j)
{
	return 1 / ((1 / i + 1 / j) / 2);
}