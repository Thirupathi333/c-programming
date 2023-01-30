#include<stdio.h>
float interest(int P, int N)
{ char ch[1];
printf("Are you a senior citizen(y/n): ");
scanf("%s", &ch);
 float SI,r;
 if(strcmp("y",ch)==0){
r=12;
}
 else if(strcmp("n",ch)==0){
r=10;
 }
