#include <stdio.h>
#include <ctype.h>
#include <conio.h>
void main()
{
	char character;
	
	printf("ENTER A CHARACTER: ");
	scanf("%c",&character);
	
	if(isalpha(character))
	{
		printf("%c IS AN ALPHABET.", character);
	}
	
	else
	{
		printf("%c IS NOT AN ALPHABET.", character);
	}
}
