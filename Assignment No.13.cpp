/* Write a program to reverse an array and store it to another array */
#include <stdio.h>
#include <stdlib.h>

void RevArray(int *arr, int *arr2, int size){
  while(size--){
    *arr2 = *arr;
    arr++; arr2--;
  }
}

int main(){
  int i, size;
  printf("Enter Size of Array");
  scanf("%d", &i);
  int arr[i];
  int arr2[i];
  for(int z = 0; z < i; z++){
    scanf("%d", &arr[z]);
  }
  int *arrptr, *arr2ptr;
  arrptr = &arr[0];
  arr2ptr = &arr2[i - 1];
  RevArray(arrptr, arr2ptr, i);
  printf("\nReverse Array is :");
  for(int m = 0; m < i; m++){
    printf("%d ", arr2[m]);
  }
}
