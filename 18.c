#include<stdio.h>
int main()
{
	int a;
	//input age
	printf("enter the age of the person");
	scanf("%d",&a);
	//check voting eligibility
	if (a>=18)
	{
		printf("eligibal for voing");
	}
	else
	printf("not eligible for voting");
	return 0;
}
