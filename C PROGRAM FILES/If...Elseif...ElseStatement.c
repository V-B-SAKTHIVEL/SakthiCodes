#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	printf("ENTER THE NUMBER FOR VARIABLE a: ");
	scanf("%d",&a);
	printf("ENTER THE NUMBER FOR VARIABLE b: ");
	scanf("%d",&b);
	printf("a = %d\t b = %d\n\n",a,b);
	if(a<b)
	{
		printf("a IS LESSER THAN b.");	
	}	
	
	else if(a>b)
	{
		printf("a IS GREATER THAN b.");	
	}
	
	else
	{
		printf("a IS EQUAL TO b.");	
	}
}
