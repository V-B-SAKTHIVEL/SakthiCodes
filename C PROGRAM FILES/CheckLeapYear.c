#include <stdio.h>
#include <conio.h>
void main()
{
	int year;
	
	printf("ENTER A YEAR: ");
	scanf("%d",&year);
	
	if(year % 4 == 0)
	{
		printf("%d IS A LEAP YEAR.",year);
	}
	
	else
	{
		printf("%d IS NOT A LEAP YEAR.",year);
	}
}
