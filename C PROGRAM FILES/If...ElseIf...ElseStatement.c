#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c;
	printf("ENTER NUMBER FOR VARIABLE a: ");
	scanf("%d",&a);
	printf("ENTER NUMBER FOR VARIABLE b: ");
	scanf("%d",&b);
	printf("ENTER NUMBER FOR VARIABLE c: ");
	scanf("%d",&c);
	printf("a = %d\t b = %d\t c = %d\n\n",a,b,c);
	if(a>b)
	{
		if(a>c)
		{
		    printf("a IS GREATER THAN b AND c.");	
		}
	}
	
	else if(b>c)
	{
		printf("b IS GREATER THAN a AND c.");
	}
	
	else
	{
		printf("c IS GREATER THAN a AND b.");
	}
	
	
}
