 #include <stdio.h>
 int main()
 {
 	int a = 5, b = 10, temp;
 	printf("Before swapping.");
 	printf("\na = %d, b = %d",a,b);
 	
 	temp = a;
 	a = b;
 	b = temp;
 	
 	printf("\nAfter swapping.");
 	printf("\na = %d b = %d",a,b);
}
