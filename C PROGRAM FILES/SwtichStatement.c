#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c;
	char arthopr;
	printf("ENTER VALUE a, AN ARTIHMETIC OPERATOR, AND VALUE b: \n");
	scanf("%d %c %d", &a, &arthopr, &b);
	switch(arthopr)
	{
		case '+':
			c = a + b;
			printf("THE SUM OF %d AND %d IS:  %d",a,b,c);
			break;
			
		case '-':
			c = a - b;
			printf("THE DIFFERENCE OF %d AND %d IS:  %d",a,b,c);
			break;
			
		case '*':
			c = a * b;
			printf("THE MULTIPLICATION OF %d AND %d IS:  %d",a,b,c);
			break;
			
		case '/':
			c = a / b;
			printf("THE DIVISION OF %d AND %d IS:  %d",a,b,c);
			break;
			
		case '%':
			c = a % b;
			printf("THE REMAINDER DIVISION OF %d AND %d IS:  %d",a,b,c);
			break;
	    
	    default:
	    	printf("INVALID OPERATOR. PLEASE ENTER ONLY THE ARITHMETIC OPERATORS. :)");
	}
}
