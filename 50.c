#include<stdio.h>
int main()
{
	int a[25],i,n;
	float avg=0,sum=0;
	printf("enter the elements in array: ");
	scanf("%d",&n);
	printf("\enter the elements: ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		avg=sum/n;
	}
	printf("sum of the elements is: %2.f",sum);
	prinf("\n average of the element is : %2.f",avg);
	return 0;
}
