#include <stdio.h>
#include <conio.h>
void main()
{
	//ARITHMETIC OPERATORS
	
	int a,b,sum,diff,mul,div,remdiv;
	printf("ENTER TWO INTEGERS: ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	diff=a-b;
	mul=a*b;
	div=a/b;
	remdiv=a%b;
	printf("THE ADDITION OF TWO VALUES: %d\n\n",sum);
	printf("THE DIFFERENCE OF TWO VALUES: %d\n\n",diff);
	printf("THE MULTIPLICATION OF TWO VALUES: %d\n\n",mul);
	printf("THE DIVISION OF TWO VALUES: %d\n\n",div);
	printf("THE REMAINDER DIVISION OF TWO VALUES: %d",remdiv);
}
