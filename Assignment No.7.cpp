/* Write a program to print odd and even numbers in an array */
#include <stdio.h>
#include <stdlib.h>
#define fo(i,n) for(i = 0; i < n; ++i)

void OddEvenArray(int *arr, int size){
  int i,j;
  printf("\nAll even Numbers\n");
  fo(i,size){
    if(*arr % 2 == 0){printf("%d ", *arr);}
    arr++;
  }
  printf("\nAll odd Numbers\n");
  fo(j,size){
    arr--;
    if(*arr % 2 != 0){printf("%d ", *arr);}
  }
}

int main(){
  int i,j,k;
  int* arr;
  printf("Enter size of Array");
  scanf("%d", &i);
  arr = (int*)malloc(i * sizeof(int));
  fo(j,i){
    printf("Enter Element number %d : ", j + 1);
    scanf("%d", arr + j);
  }
  OddEvenArray(arr,i);
}
