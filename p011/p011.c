#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	float a, b;

	scanf("%f %f", &a, &b);
	printf("%.2fsec\n", b/a*8);

	return 0;
}
