#include <stdio.h>
#include <conio.h>
void main()
{
	int i, n, t1, t2, NextTerm;
	
	printf("ENTER THE NUMBER FOR NUMBER OF FIBONACCI SERIES: ");
	scanf("%d",&n);
	
	t1 = 0;
	t2 = 1;
	NextTerm = t1 + t2;
	
	printf("THE FIBONACCI SERIES: %d,%d,",t1,t2);
	for(i=3;i<=n;i++)
	{
		printf("%d,",NextTerm);
		t1 = t2;
		t2 = NextTerm;
		NextTerm = t1 + t2;
	}
}
