#include <stdio.h>
#include <conio.h>
void main()
{
	int i;
	double number,sum = 0.0;
	const int finlimit = 2;
	
	for(i=1;i<=finlimit;i++)
	{
		printf("ENTER THE NUMBER: ");
		scanf("%lf",&number);
		if(number < 0.0 )
		{
			printf("THE NUMBER YOU'VE ENTERED IS NEGATIVE.\n\n");
			goto jump;
		}
		
		sum += number;
	}
		
	jump:
		printf("Sum: %.2f",sum);
		double average = sum / (i-1);
		printf("Average = %.2f",average);
		
		
		
}
