#include <stdio.h>
#include <conio.h>
void main()
{
	//++a - it is called as pre - increment
	//a++ - it is called as post - increment
	int a = 5, b = 6, c = 7, d = 8;
	printf("a = %d\n",a); 
	printf("THE INCREMENTED VALUE OF a IS: %d\n",++a);//pre - increment
	printf("THE DECREMENTED VALUE OF a IS: %d\n\n",--a);//pre - decrement
	printf("b = %d\n",b);
	printf("THE INCREMENTED VALUE OF b IS: %d\n",++b);
	printf("THE DECREMENTED VALUE OF b IS: %d\n\n",--b);
	printf("c = %d\n",c);
	printf("THE INCREMENTED VALUE OF c IS: %d\n",++c);
	printf("THE DECREMENTED VALUE OF c IS: %d\n\n",--c);
	printf("d = %d\n",d);
	printf("THE INCREMENTED VALUE OF d IS: %d\n",++d);
	printf("THE DECREMENTED VALUE OF d IS: %d\n\n",--d);
	
}
