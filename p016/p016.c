#include <stdio.h>

int main()
{
	float miles, gallons, mpg, lp100;
	const float lpg = 3.785;
	const float kpm = 1.609;
	
	scanf("%f %f", &miles, &gallons);
	
	mpg = miles / gallons;
	lp100 = 100. / mpg  * lpg / kpm;

	printf("%.1f mpg or %.1f liters / 100Km.", mpg, lp100);
	
	return 0;
}
