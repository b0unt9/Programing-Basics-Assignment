#include <stdio.h>
#include <ctype.h>

int division(char ch);

int main(void)
{
	char ch;
	
	while ((ch = getchar()) != EOF)
	{
		if (division(ch) == -1 && ch != ' ' && ch != '\n') 
            printf("%c is not a letter.\n", ch);
		else if (division(ch) != -1 && ch != ' ' && ch != '\n') 
            printf("%c is a letter #%d.\n", ch, division(ch));
	}
	
	return 0;
}

int division(char ch)
{
	if (isalpha(ch)) {
		if (isupper(ch)) 
            return ch - 64;
		else 
            return ch - 96;
	} else 
        return -1;
}