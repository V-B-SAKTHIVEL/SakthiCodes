#include <stdio.h>
#include <conio.h>
void main()
{
	int num, i;
	printf("ENTER THE POSITIVE INTEGER: ");
	scanf("%d",&num);
	printf("THE FACTORS OF %d ARE: ", num);
	for(i = 1; i <= num; ++i)
	{
		if(num % i == 0)
		{
			printf("%d ",i);
		}
	}
}
