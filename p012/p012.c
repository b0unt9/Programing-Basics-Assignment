#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char fname[30], lname[30];
	int age;
	scanf("%s %s", fname, lname);
	scanf("%d", &age);
	printf("%d %d", strlen(fname)+strlen(lname), age);
	return 0;
}
