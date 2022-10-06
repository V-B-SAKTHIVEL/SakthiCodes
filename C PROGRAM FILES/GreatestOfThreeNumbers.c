#include <stdio.h>
#include <conio.h>
void main()
{
	double number1, number2, number3;
	
	printf("ENTER NUMBERS IN ORDER FOR THE VARIABLES number1, number2, number3: ");
	scanf("%lf %lf %lf", &number1, &number2, &number3);
	printf("\n\nnumber1 = %.2f \t number2 = %.2f \t number3 = %.2f \n\n",number1, number2, number3);
	
	if((number1 > number2) && (number1 > number3))
	{
		printf("number1 IS THE GREATEST NUMBER...");
	}
	
	else if((number2 > number1) && (number2 > number3))
	{
		printf("number2 IS THE GREATEST NUMBER...");
	}
	
	else if((number3 > number1) && (number3 > number2))
	{
		printf("number3 IS THE GREATEST NUMBER...");
	}
	
	else 
	{
		printf("ALL THE NUMBERS ARE EQUAL. THERE IS NO GREATEST NUMBER.");
	}
}
