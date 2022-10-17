#include <stdio.h>
#include <conio.h>
void main()
{
	double basenum, result = 1.0;
	int exponent;
	
	printf("ENTER THE NUMBER TO CALCULATE THE EXPONENTIAL: ");
	scanf("%lf",&basenum);
	printf("ENTER THE EXPONENT OF THE NUMBER: ");
	scanf("%d",&exponent);
	
	while(exponent != 0)
	{
		result *= basenum;
		exponent--;
	}
	
	printf("THE EXPONENT OF THE GIVEN NUMBER IS: %lf",result);
}
