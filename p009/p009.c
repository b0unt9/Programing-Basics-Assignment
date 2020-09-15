#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	float a = 3.0e-23;
	float b = 950;
	float c, d;
	
	scanf("%f", &c);
	d = c*b/a;
	printf("%e\n", d);
	
	return 0;
}
