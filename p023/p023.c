#include <stdio.h>

int main()
{
	long long int r1, r2, r3, r4, r5;
	double reseult;
	
	scanf("%lld %lld %lld %lld %lld", &r1, &r2, &r3, &r4, &r5);
	
	reseult = r1 + r5 + (double) ((r2+r3)*r4)/(r2+r3+r4)
	
	printf("%.5f", reseult);

	return 0;
}
