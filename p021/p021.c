#include <stdio.h>

int main()
{
	char text[21];
	scanf("%s", text);
	
	int i, j, length;
        
    length = strlen(text)+1;
    
    for(i=1; i<=length ;i++)
    {
        for(j=0; j<i-1; j++)
            printf("%c",text[j]);
        printf("*\n");
    }
}
