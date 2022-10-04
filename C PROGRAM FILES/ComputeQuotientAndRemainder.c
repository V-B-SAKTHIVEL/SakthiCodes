#include <stdio.h>
#include <conio.h>
void main()
{
	int dividend, divisor, quotient, remainder;
	printf("ENTER THE DIVIDEND: ");
	scanf("%d",&dividend);
	printf("\nENTER THE DIVISOR: ");
	scanf("%d",&divisor);
	quotient = dividend / divisor;
	remainder = dividend % divisor;
	printf("\n\nQUOTIENT: %d\n", quotient);
	printf("REMAINDER: %d", remainder);
}
