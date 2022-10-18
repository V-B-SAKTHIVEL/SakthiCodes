#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int low, high, number, originalnumber, rem, count = 0;
	double result = 0.0;
	
	printf("ENTER TWO NUMBERS(INTERVALS): ");
	scanf("%d %d",&low, &high);
	printf("ARMSTRONG NUMBERS BETWEEN %d AND %d ARE: ",low, high);
	
	if(high < low)
	{
		high += low;
		low = high - low;
		high -= low;
	}
	
	for(number = low + 1; number < high; number++)
	{
		originalnumber = number;
	}
	
	while(originalnumber != 0)
	{
		originalnumber /= 10;
		count++;
	}
	
	originalnumber = number;
	
	while(originalnumber != 10)
	{
		rem = originalnumber % 10;
		result += pow(rem, count);
		originalnumber /= 10;
	}
	
	if((int)result == number)
	{
		printf("%d",number);
	}
	
	count = 0;
	result = 0;
}
