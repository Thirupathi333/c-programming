#include<stdio.h>
int main()
{
	int num1,num2,r,i;
	printf("enter the first number for the range:");
	scanf("%d",&num1);
	printf("enter the second number for the range");
	scanf("%d",&num2);
	printf("\n display the even numbers between %d & %d are:",num1,num2);
	for(i= num1;i<= num2; i++);
	{
		r= i%2;
		if(r==0)
		printf("\n %d",i);
	}
	printf("\n display the odd numbers between %d & %d are:",num1,num2);
	for(i= num1;i<= num2; i++);
	{
		r= i%2;
		if(r==1)
		printf("\n %d",i);
	}
	return 0;
}
