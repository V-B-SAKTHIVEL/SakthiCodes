#include <stdio.h>
#include <conio.h>
void main()
{
	int number,rem,rev = 0;
	
	printf("ENTER A NUMBER: ");
	scanf("%d",&number);
	
	while(number!=0)
	{
		rem = number % 10;
		rev = (rev * 10) + rem;
		number = number / 10;
	}
	
	printf("THE REVERSE OF THE GIVEN VALUE IS: %d",rev);
}
