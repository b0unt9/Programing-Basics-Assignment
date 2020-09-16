#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char fname[10], lname[10];
	float a, b, c, score;
	scanf("%s %s", fname, lname);
	scanf("%f %f %f", &a, &b, &c);
	score = (a+b+c)/3;
	
	printf("\"%s %*s\"        %.1f", fname, 23-strlen(lname), lname, score);
	
	return 0;
}
