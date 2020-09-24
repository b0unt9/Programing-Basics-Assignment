#include <stdio.h>

int main()
{
	char text[21];
	int i, j, k, length;
	
	scanf("%s", text);
	
    length = strlen(text);
    
    for(i=1; i<=length ;i++)
    {
    	printf("*");
        for(j=0; j<i; j++)
            printf("%c",text[j]);

        for(k=length; k>i; k--)
            printf(" ");
        
        printf("*\n");
    }
}
