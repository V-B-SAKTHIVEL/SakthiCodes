#include <stdio.h>
#include <conio.h>
void main()
{
	int intvar = 3;
	long longvar;
	long long longlongvar;
	double doublevar;
	long double longdoublevar;
	
	printf("SIZE OF intvar IS: %d\n", sizeof(intvar));
	printf("SIZE OF longvar IS: %d\n", sizeof(longvar));
	printf("SIZE OF longlongvar IS: %d\n", sizeof(longlongvar));
	printf("SIZE OF doublevar IS: %d\n", sizeof(doublevar));
	printf("SIZE OF longdoublevar IS: %d", sizeof(longdoublevar));
}
