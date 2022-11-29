 #include <stdio.h>
 int main()
 {
 	int v,u,a,b,c,s,t;
 	printf("Enter the initial velocity of the object: ");
 	scanf("%d",&u);
 	printf("Enter the time taken for the object: ");
 	scanf("%d",&t);
 	
 	printf("Enter the acceleration of the object: ");
 	scanf("%d",&a);
 	printf("Enter values for b and c: ");
 	scanf("%d %d",&b,&c);
 	
 	v = u + (a * t);
 	
 	s = (u * t) + (0.5 * a);
 	
 	t = (2 * a) + (b ^ 1/2) + (9 * c);
 	
 	printf("\n\nThe final velocity of the object is: %d",v);
 	printf("\nThe displacement of the object is: %d",s);
 	printf("\nThe value of t is: %d",t);
 	
 	return 0;
 	
 }
