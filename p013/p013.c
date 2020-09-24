#include <stdio.h>

int main()
{
	
	int a, b, c, d;
	
	double result;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	result = d/(double) (a+b+c+d)*100.0;
	
	printf("%.2f%%", result);
	
	return 0;
}
