#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,sum,diff,mul,div,remdiv;
	printf("ENTER A NUMBER 1: ");
	scanf("%d",&a);
	printf("ENTER A NUMBER 2: ");
	scanf("%d",&b);
	printf("NUMBER 1 IS: %d\n",a);
	printf("NUMBER 2 IS: %d\n",b);
	sum=a+b;
	diff=a-b;
	mul=a*b;
	div=a/b;
	remdiv=a%b;
	printf("THE SUM OF TWO NUMBERS IS: %d\n",sum);
	printf("THE DIFFERENCE OF TWO NUMBERS IS: %d\n",diff);
	printf("THE MULTIPLICATION OF TWO NUMBERS IS: %d\n",mul);
	printf("THE DIVISION OF TWO NUMBERS IS: %d\n",div);
	printf("THE REMAINDER DIVISION OF TWO NUMBERS IS: %d\n",remdiv);
	
}
