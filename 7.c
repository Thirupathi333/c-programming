#include<stdio.h>
int main()
{
	int dividend,divisor,quotient,remainder;
	printf("enter dividend: ");
	scanf("%d", &dividend);
	printf("enter divisor: ");
	scanf("%d", &divisor);
		
	//computes quotient
	quotient = dividend / divisor;
	
	//computes remainder
	remainder = dividend % divisor;
	
	printf("Quotient = %d\n",quotient);
	printf("remainder = %d",remainder);
	return 0;
}
