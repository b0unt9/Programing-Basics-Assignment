#include <stdio.h>

int main()
{
	char fname[31], lname[31];
	
	int age;
	
	scanf("%s %s", fname, lname);
	
	scanf("%d", &age);
	
	printf("%d %d", strlen(fname)+strlen(lname), age);
	
	return 0;
}
