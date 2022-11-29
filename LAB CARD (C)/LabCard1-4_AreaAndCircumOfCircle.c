 #include <stdio.h>
 int main()
 {
 	float area, circum, radius, pi = 3.14;
 	printf("Enter the radius of the circle: ");
 	scanf("%f",&radius);
 	area = (pi * pi) * radius;
 	circum = (2 * pi) * radius;
 	printf("The area of the circle is: %f",area);
 	printf("\nThe circumference of the circle is: %f",circum);
 	return 0;
 }
