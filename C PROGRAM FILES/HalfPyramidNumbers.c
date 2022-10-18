#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j , rows;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &rows);
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
