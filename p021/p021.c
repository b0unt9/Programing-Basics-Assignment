#include <stdio.h>

int main()
{
	char text[21];
	scanf("%s", text);
	
	int i, j, length;
        
    length = strlen(text)+1;
    
    for(i=1; i<length ;i++)
    {
    	printf("*");
        for(j=0; j<i; j++)
            printf("%c",text[j]);
        printf("%*s\n", length-i, "*");
    }
}
