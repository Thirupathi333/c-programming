#include <stdio.h>

void perfectchk(int n){
    int sum=0;
    for(int i=1; i<n; i++) 
    {
         if(n%i==0)
         {
            sum+=i;
         } 
    }
    if(sum==n)
    {
       printf("%d is a perfect number",n);
    }
    else 
    {
       printf("%d is not a perfect number");
    }
}

int main(){
    int n; 
    printf("Enter a Number : ");
    scanf("%d",&n);
    perfectchk(n);
    return 0;
}
