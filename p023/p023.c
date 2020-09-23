#include <stdio.h>

int main()
{
	long long int a, b, c, d, e;
	double reseult;
	scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
	
	reseult = a+((b+c)*d*1.)/(b+c+d)+e;
	
	printf("%.5f", reseult);

	return 0;
}
