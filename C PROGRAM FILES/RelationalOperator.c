#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b, c;
	printf("ENTER THE VALUES FOR a AND b: ");
	scanf("%d %d",&a, &b);
	//if it is true, it returns 1; if it is false, it returns 0;
	c = (a > b);
	printf("%d IS GREATER THAN %d: %d",a,b,c);
	
}
