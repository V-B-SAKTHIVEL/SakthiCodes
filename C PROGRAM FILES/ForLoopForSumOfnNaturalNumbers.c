#include <stdio.h>
#include <conio.h>
void main()
{
	int i,count,sumvar = 0;
	printf("ENTER THE NUMBER TO CALCULATE THE SUM OF SERIES:  "); //2
	scanf("%d",&i);
	for(count = 1; count <= i; count++)
	{
		sumvar = sumvar + count;
	}
	printf("Sum = %d",sumvar);
}
