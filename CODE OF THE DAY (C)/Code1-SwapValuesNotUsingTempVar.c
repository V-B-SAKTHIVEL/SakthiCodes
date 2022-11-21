#include <stdio.h>
int main()
{
	int a = 5, b = 10;
	
	printf("Before swapping.");
	printf("\na = %d b = %d",a,b);
	
	a = a + b; //5 + 10 = 15 = a
	b = a - b; //15 - 10 = (5 = b)
	a = a - b; //15 - 5 = (10 = a)
	
	printf("\nAfter swapping.");
	printf("\na = %d b = %d",a,b);
}
