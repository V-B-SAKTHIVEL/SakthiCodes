#include <stdio.h>
int main()
{
	int a = 5, c;
	c = a; //c is 5
	printf("c = %d\n",c);
	c += a; //c is 10
	printf("c = %d\n",c);
	c -= a; //c is 5
	printf("c = %d\n",c);
	c *= a; //c is 25
	printf("c = %d\n",c);
	c /= a;//c is 5
	printf("c = %d\n",c);
	c %= a; //c is 0
	printf("c = %d",c);
	return 0;	
}
