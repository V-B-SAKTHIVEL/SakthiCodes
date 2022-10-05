#include <stdio.h>
#include <conio.h>
void main()
{
	char word[15] = {'J','U','M','P',' ','S','T','A','T','E','M','E','N','T'};
	int i;
	for(i=0;i<=15;i++)
	{
		if(word[i] == 'E')
		{
			break;
		}
		printf("%c",word[i]);
	}
}
