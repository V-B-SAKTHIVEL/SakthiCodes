#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n,t1,t2,NextTerm;
	
	printf("ENTER THE NUMBER FOR NUMBER OF TERMS IN FIBONACCI SERIES: ");
	scanf("%d",&n);
	
	t1 = 0;
	t2 = 1;
	NextTerm = t1 + t2;
	i = 3;
	
	printf("THE FIBONACCI SERIES ARE: %d,%d,",t1,t2);
	
	while (i <= n)
	{
		printf("%d,...",NextTerm);
		t1 = t2;
		t2 = NextTerm;
		NextTerm = t1 + t2;
		i++;
	}
}
