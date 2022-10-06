#include <stdio.h>
#include <conio.h>
void main()
{
	int i, count, sum = 0;
	
	do
	{
		printf("ENTER A POSITIVE INTEGER: ");
		scanf("%d",&i);
	}
	
	while(i <= 0);
	
	for(count = 1; count <= i;  count++)
	{
		sum += count;
	}
	
	printf("Sum of first %d natural numbers is = %d",i,sum);	
	
}
