#include <stdio.h>
#define n 7
int main(){
	int i;
    int arr[n] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
}
