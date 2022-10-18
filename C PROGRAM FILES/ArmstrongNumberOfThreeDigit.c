#include <stdio.h>
int main()
{
	int num, originalNum, remainder, result = 0;
	printf("ENTER A THREE DIGIT NUMBER: ");
	scanf("%d",&num);
	
	originalNum = num;
	
	while(originalNum != 0)
	{
		remainder = originalNum % 10;
		
		result += remainder * remainder * remainder;
		
		originalNum /= 10;
	}
	
	if(result == num)
	{
		printf("%d IS AN ARMSTRING NUMBER");
	}
	
	else
	{
	
		printf("%d IS NOT AN ARMSTRONG NUMBER");
	}
	
	return 0;
}
