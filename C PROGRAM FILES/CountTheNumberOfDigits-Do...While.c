#include <stdio.h>
#include <conio.h>
void main()
{
	long long longnumber;
	int digitnum = 0;
	
	printf("ENTER A VALUE: ");
	scanf("%lld",&longnumber);
	
	do
	{
		longnumber /= 10;
		digitnum++;
	}
	while(longnumber != 0);
	
	printf("NO. OF DIGITS IN THE GIVEN NUMBER IS: %d",digitnum);
	
	
}
