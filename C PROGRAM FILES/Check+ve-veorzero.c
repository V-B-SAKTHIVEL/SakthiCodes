#include <stdio.h>
#include <conio.h>
void main()
{
	double number;
	
	printf("ENTER A NUMBER: ");
	scanf("%lf",&number);
	
	if(number < 0.0)
	{
		printf("%.2f IS A NEGATIVE NUMBER.",number);
	}
	
	else if(number > 0.0)
	{
		printf("%.2f IS A POSITIVE NUMBER.",number);
	}
	
	else
	{
		printf("YOU HAVE ENTERED 0");
	}
}
