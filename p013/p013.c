#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	double a, b, c, d, e, f;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	e = a+b+c+d;
	f = d/e*100;
	printf("%.2f%%", f);
	return 0;
}
