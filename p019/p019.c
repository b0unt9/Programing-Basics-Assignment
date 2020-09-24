#include <stdio.h>

int main()
{
	int day;
	int count = 1;
	long long int sum = 0;
	
	scanf("%d", &day);
	
	while (count <= day)
	{
		sum = sum + count;
		count++;
	}
	
	printf("%lld\n", sum*1000);
	
	return 0;
}
