#include <stdio.h>
#include <conio.h>
void main()
{
	int i,number1,number2,GCD;
	
	printf("ENTER TWO VALUES TO CALCULATE THE GREATEST COMMON DIVISOR: ");
	scanf("%d %d",&number1, &number2);
	
	while(number1 != number2)
	{
		if(number1 > number2)
		{
			number1 -= number2;//number1 = number1 - number2
		}
		
		else
		{
			number2 -= number1;
		}
	}
	
	printf("THE GREATEST COMMON DIVISOR IS: %d",number1);
}
