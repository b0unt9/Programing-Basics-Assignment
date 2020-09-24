#include <stdio.h>

int main()
{
	int sec, min, hour, day;
	
	scanf("%d",&sec);
	
	min=sec/60;
	hour=min/60;
	day=hour/24;
	sec=sec%60;
	min=min%60;
	hour=hour%24;
	
	printf("%d %d %d %d", day, hour, min, sec);

	return 0;
}
