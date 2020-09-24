#include <stdio.h>
#include <string.h>

int main()
{
	char fname[31], lname[31];
	
	scanf("%s %s", &fname, &lname);
	
	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
	
	return 0;
}
