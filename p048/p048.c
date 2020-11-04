#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	char ch;
	int i, j;
	
	ch = getchar();
	scanf("%d %d", &i, &j);
	chline(ch, i, j);
	
	return 0;
}

void chline(char ch, int i, int j)
{
	int k;
    
	for (k = 1; k < i; k++) printf("+");
	for (k = i; k <= j; k++) printf("%c", ch);
    for (k = 1; k < i; k++) printf("+");
}