#include <stdio.h>

int main()
{
	double mbs, mb, result;

	scanf("%lf %lf", &mbs, &mb);
	
	result = mb / mbs * 8;
	
	printf("%.2lfsec\n", result);

	return 0;
}
