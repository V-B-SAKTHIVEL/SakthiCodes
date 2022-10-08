#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n1,n2,GCD;
	
	printf("ENTER TWO VALUES TO CALCULATE THE GREATEST COMMON DIVISOR: ");
	scanf("%d %d",&n1,&n2);
	
	for(i=1;i <= n1 && i <= n2; i++)
	{
		if(n1%i == 0 && n2%i == 0)
		{
			GCD = i;
		}
	}
	
	printf("THE GREATEST COMMON DIVISOR OF %d AND %d IS: %d",n1,n2,GCD);
}
