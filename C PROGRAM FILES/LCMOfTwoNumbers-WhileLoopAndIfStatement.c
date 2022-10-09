#include <stdio.h>
#include <conio.h>
void main()
{
	int i,number1, number2,lcm;
	
	printf("ENTET TWO VALUES FOR CALCULATING LEAST COMMON MULTIPLE: ");
    scanf("%d %d",&number1, &number2); // 20,25
    
    lcm = (number1 > number2) ? number1 : number2;
    
    while(1)
    {
    	if((lcm % number1 == 0) && (lcm % number2 == 0))
    	{
    		printf("The L.C.M of two values %d and %d is: %d",number1,number2,lcm);
    		break;
		}
		
		lcm++;
	}
}

