#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int count_upper = 0, count_lower = 0;
	
	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch)) count_upper++;
		else if (islower(ch)) count_lower++;
	}
	
	printf("%d %d", count_upper, count_lower);
	
	return 0;
}