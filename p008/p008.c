#include <stdio.h>

int main() {
	float a;
	
	scanf("%f", &a);
	
	printf("Fixed-point notation: %f\n", a);
	printf("Exponential notation: %e\n", a);
	printf("p notation: %a\n", a);

	return 0;
}
