#include <stdio.h>
#include <conio.h>
void main()
{
	int i,count = 1, sum = 0;
	
	printf("ENTER A POSITIVE NUMBER TO CALCULATE THE SUM OF NATURAL NUMBERS: ");
	scanf("%d",&i);
	
	while(count <= i)
	{
		sum += count;
		count++;
	}
	
	printf("THE SUM OF FIRST %d NATURAL NUMBERS IS: %d",i,sum);
}
