/* Write a program to check is given target number is present in array or not */
#include <stdio.h>
#include <stdlib.h>
#define fo(i,n) for(i = 0; i < n; i++)

int main(){
  int i,j,l,k,m;
  printf("Enter Size of List :");
  scanf("%d", &i);
  int arr[i];
  fo(l,i){
    printf("\nEnter Element number %d :", l);
    scanf("%d", &arr[l]);
  }
  printf("\nEnter Number you want to check(Other than 0) : ");
  scanf("%d", &j);
  m = 0;
  fo(k,i){
    if(arr[k] == j){m = arr[k];break;}
  }
  if(m == 0){printf("NOT FOUND");}
  else{printf("FOUND");}
}
