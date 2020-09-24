#include <stdio.h>

int main() {

	const float mole = 3.0e-23;
	const float quart = 950;
	float input, result;
	
	scanf("%f", &input);
	
	result = input * quart / mole;
	
	printf("%e\n", result);
	
	return 0;
}
