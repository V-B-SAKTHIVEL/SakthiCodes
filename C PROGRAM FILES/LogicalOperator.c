#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c;
	printf("ENTER THE VALUES FOR a, b and c:\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("a = %d\t b = %d\t c = %d\t\n\n",a,b,c);
	printf("USING 'logical and':\n");
	//if it is true, it returns 1; if it is false, it returns 0.
	printf("(a < b) && (b < c): %d\n\n", (a < b) && (b < c));
	printf("USING 'logical or': \n");
	printf("(a < b) || (b < c): %d\n\n", (a < b) || (b < c));
	printf("USING 'logical not': \n");
	printf("!((a < b) && (b < c)): %d\n\n",!((a < b) && (b < c)));
	printf("AGAIN USING 'logical not': \n");
	printf("!((a < b) || (b < c)): %d",!((a < b) || (b < c)));
}
