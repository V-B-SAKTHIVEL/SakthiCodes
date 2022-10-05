#include <stdio.h>
#include <conio.h>
void main()
{
	int i,count=1,sum=0;
	printf("ENTER THE VALUE FOR CALCULATING THE SUM OF n NATURAL NUMBERS: ");//3
	scanf("%d",&i);
	printf("i = %d\n\n",i);
	do
	{
		sum += count;
		count++;
	}
	
	while(count<=i);
	printf("THE SUM OF n NATURAL NUMBERS IS: %d",sum);

}

