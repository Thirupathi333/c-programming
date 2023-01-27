#include<stdio.h>
int main()
{
	int a;
	printf("Enter the age :");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("Eligible for vote:");
	}
	else if(a<18)
	{
		printf("Not eligble for vote");

			printf("\nyou are allowed to vote after %d years",18-a);
		}
	
	return 0;
}
