#include<stdio.h>
#include<math.h>
void Pow(int x,int n);
void add(int x,int n);
void sub(int x,int n);
void mult(int x,int n);
void div(int x,int n);
int main()
{
	int x,n,choice;
	printf("enter the x value: ");
	scanf("%d", &x);
	printf("enter the n value: ");
	scanf("%d",&n);
	printf("enter the choice value: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			pow(x,n);
			break;
		case 2:
			add(x,n);
			break;
		case 3:
		     sub(x,n);
			 break;
		case 4:
		     mult(x,n);
		     break;
	    case 5:
	    	div(x,n);
	    	break;
	}
	return 0;
}
	void Pow(int x ,int n)
	{
		int result;
		result=pow(x,n);
		printf("pow(x,n)=%d",result);
	}
	void add (int x,int n)
	{
		int sum;
		sum=x+n;
		printf("add(x,n)=%d",sum);
	}
	void sub (int x, int n)
	{
		int sub;
		sub=x-n;
		printf("sub(x,n)=%d",sub);
	}
	void mult(int x, int n)
	{
		int product;
		product=x*n;
		printf("mult(x,n)=%d",product);
	}
	void div(int x, int n)
	{
		int division;
		division=x/n;
		printf("div(x,n)=%d",division);
    }
