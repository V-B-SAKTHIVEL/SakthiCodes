#include <stdio.h>
#include <conio.h>
void main()
{
	int i, count, sum = 0;
	printf("ENTER A POSITIVE INTEGER TO CALCULATE THE SUM OF NATURAL NUMBERS: ");
	scanf("%d",&i);
	
	for(count = 1;count <= i;count++)
	{
		sum += count;
	}
	
	printf("THE SUM OF FIRST %d NATURAL NUMBERS IS: %d",i,sum);
}
