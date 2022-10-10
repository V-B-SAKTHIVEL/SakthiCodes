#include <stdio.h>
#include <conio.h>
void main()
{
	int number1, number2, lcm, gcd, i;
	
	printf("ENTER TWO NUMBERS: ");
	scanf("%d %d",&number1, &number2);
	
	for(i = 1; i <= number1 && i <= number2;i++)
	{
		if(number1 % i == 0 && number2 % i == 0)
		{
			gcd = i;
		}
	}
	
	lcm = (number1 * number2) / gcd;
	printf("THE LEAST COMMON MULTIPLE OF TWO NUMBERS %d AND %d IS: %d",number1, number2, lcm);
	
}
