/* Write a program to add two array and store result to third array */
#include <stdio.h>
#include <stdlib.h>

void Add(int *arr1, int *arr2, int *arr3, int size){
  while(size--){
    *arr3 = *arr1 + *arr2;
    arr1++;arr2++;arr3++;
 }
}

int main(){
  int i;
  printf("Enter size of Array");
  scanf("&i", &i);
  int arr1[i];
  int arr2[i];
  int arr3[i];
  printf("\nEnter elements of 1st array : ");
  for(int j = 0; j < i; ++j){
    scanf("%d", &arr[j]);
  }
  printf("\nEnter elements of 2nd array : ");
  for(int k = 0; k < i; ++k){
    scanf("%d", &arr[k];)
  }
  int *arr1ptr, *arr2ptr, *arr3ptr;
  arr1ptr = &arr1[0];
  arr2ptr = &arr2[0];
  arr3ptr = &arr3[0];
  Add(arr1ptr, arr2ptr, arr3ptr, i);
  printf("\nAdded Array is :\n")
  while(i--){
    printf("%d ", &arr3[i - 1]);
  }
}
