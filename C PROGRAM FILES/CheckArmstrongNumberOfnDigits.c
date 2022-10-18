#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int num, originalnum, remainder, n = 0;
	float result = 0.0;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&num);
	originalnum = num;
	for(originalnum = num; originalnum != 0; n++)
	{
		originalnum /= 10;
	}
	
	for(originalnum = num; originalnum != 0; originalnum /= 10)
	{
		remainder = originalnum % 10;
	}
	
	result = pow(remainder,n);
	if((int)result == num)
	{
		printf("%d is an Armstrong number.", num);
	}
	
	else
	{
		printf("%d is not an Armstrong number.",num);
	}
}
