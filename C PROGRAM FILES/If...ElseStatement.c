#include <stdio.h>
#include <conio.h>
void main()
{
	int age;
	printf("ENTER YOUR AGE: ");
	scanf("%d",&age);
	if (age>=18)
	{
		printf("YOU ARE ELIGIBLE FOR VOTING...");
	}	
	
	else
	{
		printf("YOU ARE NOT ELIGIBLE FOR VOTING...");
	}
}
