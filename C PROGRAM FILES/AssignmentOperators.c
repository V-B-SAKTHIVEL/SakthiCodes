#include <stdio.h>
#include <conio.h>
void main()
{
	//ASSIGNMENT OPERATORS
	int a = 2, b = 4;
	printf("a = %d\nb = %d\n\n",a,b);
	printf("b += a: %d\n", b += a); //b += a --> b = b + a
	printf("b -= a: %d\n", b -= a); //b -= a --> b = b - a
	printf("b *= a: %d\n", b *= a); //b *= a --> b = b * a
	printf("b /= a: %d\n", b /= a); //b /= a --> b = b / a
	printf("b %= a: %d\n", b %= a); //b %= a --> b = b % a
}
