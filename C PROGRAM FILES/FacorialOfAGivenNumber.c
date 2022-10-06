#include <stdio.h>
#include <conio.h>
void main()
{
	int num,i;
	unsigned long long fact = 1;
	
	printf("ENTER A NUMBER TO CALCULATE THE FACTORIAL : ");
	scanf("%d",&num);
	
	if(num <= 0)
	{
		printf("Error... Please enter a value greater than 0.");
	}
	
	else
	{
		for (i = 1; i <= num; i++)
		{
			fact *= i;
		}
	}
	
	printf("THE FACTORIAL OF %d IS: %d",num, fact);
}


