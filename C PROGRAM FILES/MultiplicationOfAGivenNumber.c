#include <stdio.h>
#include <conio.h>
void main()
{
	int number,mul,i;
	printf("ENTER A NUMBER TO DISPLAY THE MULTIPLICATION OF IT: ");
	scanf("%d",&number);
	for(i=0;i<=10;i++)
	{
		mul = number * i;
		printf("%d * %d = %d\n\n",number,i,mul);
	}
}
