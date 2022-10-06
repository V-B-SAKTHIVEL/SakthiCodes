#include <stdio.h>
#include <conio.h>
void main()
{
	unsigned long long number,range,i;
	printf("ENTER THE NUMBER TO DISPLAY THE MULTIPLICATION OF IT:  ");
	scanf("%llu",&number);
	printf("ENTER THE RANGE OF THE MULTIPLICATION: ");
	scanf("%llu",&range);
	
	for(i = 0;i <= range; i++)
	{
		printf("%llu * %llu = %llu\n\n",number,i,number*i);
	}
}
