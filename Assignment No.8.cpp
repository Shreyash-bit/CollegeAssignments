/* Write a program to find sum of all even and odd indexes in a array */
#include <stdio.h>
#include <stdlib.h>
#define fo(i,n) for(i = 0; i < n; ++i)

void OddEvenIndexSum(int *arr, int size){
  int i;
  int evensum = 0, oddsum = 0;
  fo(i,size){
    if(i % 2 == 0){evensum = evensum + *arr;}
    else if(i % 2 != 0){oddsum = oddsum + *arr;}
    else if(i == 0){evensum = evensum + *arr;}
    arr++;
  }
  printf("\nThe Even Index sum is %d\nThe Odd Index sum is %d", evensum, oddsum);
}

int main(){
  int i, j;
  printf("Enter size of Array : ");
  scanf("%d", &i);
  int* arr;
  arr = (int*)malloc(i * sizeof(int));
  fo(j,i){
    printf("\nEnter Element Number %d : ", j + 1);
    scanf("%d", arr + j);
  }
  OddEvenIndexSum(arr,i);
}
