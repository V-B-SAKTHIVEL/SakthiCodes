#include <stdio.h>
#include <math.h>
void main()
{
	long long base, exponent, result;
	
	printf("ENTER A NUMBER TO CALCULATE THE EXPONENT: ");
	scanf("%lld",&base);
	printf("ENTER THE EXPONENT VALUE: ");
	scanf("%lld",&exponent);
	result = pow(base, exponent);
	printf("THE EXPONENT OF THE VALUE %lld IS: %lld",base,result);
}
