/* Write a program to find the largest of Numbers */
#include <stdio.h>
#include <stdlib.h>

int Largest(int sizearr){
  int arr[sizearr];
  for(int j = 0; j < sizearr; ++j){
    scanf("%d", &arr[j]);
  }
  int greatest = arr[0];
  for(int i = 0; i < sizearr; ++i){
    if(arr[i] > greatest){greatest = arr[i];}
  }
  return greatest;
}

int main(){
  int i;
  printf("\nEnter Number of Elements : ");
  scanf("%d", &i);
  printf("\nThe Largest Number is : %d",Largest(i));
}
