#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int day, hour, minute, second;
	scanf("%d", &second);

	day = (second/60)/60/24;
	hour = (second/60)/60%24;
	minute = (second/60)%60;
	second = second%60;

	printf("%d %d %d %d", day, hour, minute, second);

	return 0;
}
