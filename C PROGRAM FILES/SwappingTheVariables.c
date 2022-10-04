#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,tempvar;
	printf("ENTER THE FIRST NUMBER: "); //2
	scanf("%d",&a);
	printf("ENTER THE SECOND NUMBER: "); //3
	scanf("%d",&b);
	
	//swapping method:
	
	tempvar = a; // value of a is assigned to tempvar
	
	a = b; // 'b' value is assigned to 'a'. So, 'a' value is assigned to tempvar
	
	b = tempvar; 
	
	printf("a = %d",a);
	printf("b = %d",b);
}
