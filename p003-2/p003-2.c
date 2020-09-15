#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a, b;
	scanf("%d", &a);
	b = 365*a;
	printf("An age of %d years is %d days.\n", a, b);
	return 0;
}
