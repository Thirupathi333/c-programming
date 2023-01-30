#include<stdio.h>
int main() {
  double first, second,third, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);
  printf("enter the third number: ");
  scanf("%lf", &third);
  // value of first is assigned to temp
  temp = first;
  // value of second is assigned to first
  first = third;
  // value of third is assigned to second
  third = second;

  // value of temp (initial value of first) is assigned to second
  second=temp;
  
  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  printf("after swapping, third number = %.2lf",third);
  return 0;
}
