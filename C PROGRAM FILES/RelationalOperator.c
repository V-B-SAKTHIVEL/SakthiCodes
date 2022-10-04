#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b, c;
	printf("ENTER THE VALUES FOR a AND b: ");
	scanf("%d %d",&a, &b);
	//if it is true, it returns 1; if it is false, it returns 0;
	printf("%d IS GREATER THAN %d: %d\n\n",a,b,a>b);
	printf("%d IS GREATER THAN %d: %d\n\n",b,a,b>a);
	printf("%d IS LESSER THAN %d: %d\n\n",a,b,a<b);
	printf("%d IS LESSER THAN %d: %d\n\n",b,a,b<a);
	printf("%d IS GREATER THAN OR EQUAL TO %d: %d\n\n",a,b,a>=b);
	printf("%d IS GREATER THAN OR EQUAL TO %d: %d\n\n",b,a,b>=a);
	printf("%d IS LESSER THAN OR EQUAL TO %d: %d\n\n",a,b,a<=b);
	printf("%d IS LESSER THAN OR EQUAL TO %d: %d\n\n",b,a,b<=a);
	printf("%d IS EQUAL TO %d: %d\n\n",a,b,a==b);
    printf("%d IS NOT EQUAL TO%d: %d\n\n",a,b,a!=b);
}

