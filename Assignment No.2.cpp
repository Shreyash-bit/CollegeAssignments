/* Write a program to swap between two Numbers with call by reference and call by value */
#include <stdio.h>
#include <stdlib.h>

void swapv(int a, int b){
  int temp;

  temp = a;
  a = b;
  b = temp;
}

void swapr(int *a, int *b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int a,b,*pa,*pb;
  printf("Enter Two Numbers :");
  scanf("%d %d", &a, &b);
  swapr(&a,&b);
  printf("\nSwapped by call by reference : %d %d", a, b);
  swapv(a,b);
  printf("\nSwapped by call by value : %d %d", a, b);
}
