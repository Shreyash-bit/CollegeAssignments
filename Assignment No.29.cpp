/* Write a program to find difference betweeen two adjacent elements and store it in another array */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    printf("Enter the size of the array : ");
    scanf("%d", &i);
    int arr1[i];
    int arr2[i - 1];
    for(int j = 0; j < i; j++){
       printf("Enter element number %d : ", j + 1);
       scanf("%d", &arr1[j]);
    }
    for(int k = 0; k < i - 1; k++){
        int temp = 0;
        temp = arr1[k] - arr1[k + 1];
        arr2[k] = abs(temp);
    }
    i--;
    while(i--){
       printf("\nThe difference of element number %d and element number %d is %d", i,i+1,arr2[i]);
    }
}