#include <stdio.h>
#include <conio.h>
void main()
{
	int i,number1,number2;
	
	printf("ENTER TWO VALUES TO FIND THE GREATEST COMMON DIVISOR: ");
	scanf("%d %d",&number1, &number2);
	
	number1 = (number1 > 0) ? number1 : -number1;
	number2 = (number2 > 0) ? number2 : -number2;
	
	
	while (number1 != number2)
	{
		if(number1 > number2)
		{
			number1 -= number2;
		}
		
		else
		{
			number2 -= number1;
		}
		
		
	}
	printf("\nTHE GREATEST COMMON DIVISOR IS: %d",number1);
	
}
