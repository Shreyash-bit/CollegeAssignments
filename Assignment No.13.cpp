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
  size = i;
  int arr[i];
  int arr2[i];
  while(i--){
    scanf("%d", &arr[i]);
  }
  int *arrptr, *arr2ptr;
  arrptr = &arr[0];
  arr2ptr = &arr[size - 1];
  printf("\nReverse Array is :");
  while(size--){
    printf("%d ", arr[size - 1]);
    if(size == 0){
      break;
    }
  }
}
