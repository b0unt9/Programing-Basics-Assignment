#include <stdio.h>

int main()
{
	char fname[11], lname[11];
	
	int a, b, c;
	
	double score;
	
	scanf("%s %s", fname, lname);
	
	scanf("%d %d %d", &a, &b, &c);
	
	score = (a+b+c)/3.0;
	
	printf("\"%-10s %10s\" %8.1f", fname, lname, score);
	
	return 0;
}
