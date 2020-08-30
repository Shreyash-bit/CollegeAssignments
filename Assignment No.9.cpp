/* Write a program to display reverse of array */
#include <stdio.h>
#include <stdlib.h>
#define fo(i,n) for(i = 0; i < n; ++i)
#define fr(k,l) for(k = l - 1; k >= 0; --k)
#define intmalloc(j) (int*)malloc(j * sizeof(int))

int* ReverseArray(int *arr, int size){
  int i;
  int* arr2;
  arr2 = intmalloc(size);
  fr(i,size){
    *(arr2 + i) = *arr;
    arr++;
  }
  return arr2;
}

void DisplayArray(int *arr, int size){
  int i;
  fo(i,size){
    printf("\nElement Number %d is : %d\n", i + 1, *arr);
    arr++;
  }
}

int main(){
  int i, j;
  int* arr;
  int* arr2;
  printf("Enter size of Array : ");
  scanf("%d", &i);
  arr = intmalloc(i);
  arr2 = intmalloc(i);
  fo(j,i){
    printf("\nEnter Element Number %d : ", j + 1);
    scanf("%d", arr + j);
  }
  arr2 = ReverseArray(arr, i);
  DisplayArray(arr2, i);
}
