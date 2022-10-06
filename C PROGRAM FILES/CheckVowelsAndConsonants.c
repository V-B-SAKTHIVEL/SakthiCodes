#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main()
{
	char c;
	int lowercasevowel, uppercasevowel;
	printf("ENTER AN ALPHABET: ");
	scanf("%c",&c);
	
	lowercasevowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	uppercasevowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	
	if(!isalpha(c))
	{
		printf("Error... Please enter an alphabet...");
	}
	
	else if(lowercasevowel || uppercasevowel)
	{
		printf("%c IS A VOWEL",c);
	}
	
	else
	{
		printf("%c IS A CONSONANT",c);
	}
}





