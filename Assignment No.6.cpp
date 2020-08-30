/* Write a program to add all elements of array */
#include <stdio.h>
#include <stdlib.h>
#define fo(i,n) for(i = 0; i < n; ++i)

int SumOfArray(int *arr, int size){
  int sum = 0, i;
  fo(i,size){
    sum = sum + *arr;
    arr++;
  }
  return sum;
}

int main(){
  int* arr;
  int i,j,k,l;
  printf("Enter Size of array :");
  scanf("%d", &i);
  arr = (int*)malloc(i * sizeof(int));
  fo(j,i){
    printf("\nEnter element number %d :", j + 1);
    scanf("%d", arr + j);
  }
  printf("\nThe sum of elements is %d", SumOfArray(arr, i));
}
