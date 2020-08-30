/* Write a program to read and display array */
#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,j,l;
  printf("Enter Size of Array :");
  scanf("%d", &i);
  int arr[i];
  for(l = 0; l < i; ++l){
    printf("\nEnter Element number %d :", l);
    scanf("%d", &arr[l]);
  }
  for(j = 0; j < i; ++j){
    printf("\nElement number %d of array is : %d", j, arr[j]);
  }
}
