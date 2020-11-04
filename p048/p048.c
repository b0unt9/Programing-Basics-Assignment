#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	char ch[2];
	int i, j;
	
	scanf("%s %d %d", ch, &i, &j);
	chline(ch[0], i, j);
	
	return 0;
}

void chline(char ch, int i, int j)
{
	int k;

	if (i<1 || j<i) return;
    
	for (k = 1; k < i; k++) putchar('+');
	for (k = i; k <= j; k++) putchar(ch);
    for (k = 1; k < i; k++) putchar('+');
}