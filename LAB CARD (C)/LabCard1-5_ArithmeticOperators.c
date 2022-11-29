#include <stdio.h>
int main()
{
	int a,b,sum,diff,mul,div,remdiv;
	printf("Enter two values: "); 
	scanf("%d %d",&a, &b); 
	sum = a + b;
	diff = a - b;
	mul = a * b;
	div = a / b;
	
	printf("\nSum: %d",sum);
	printf("\nDifference: %d",diff);
	printf("\nMultiplication: %d",mul);
	printf("\nDivision: %d",div);
	
	return 0;
}
