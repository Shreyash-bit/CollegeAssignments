/* Write a menu driven program for calculator using functions */
#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b){return(a + b);}

int substraction(int a, int b){return(a - b);}

int multiplication(int a, int b){return(a * b);}

float division(int a , int b){return(a / b);}

int main(){
  while (true) {
  printf("\nEnter a option\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
  int i,a,b;
  scanf("%d", &i);
  switch(i){
    case 1:
      printf("Enter two Numbers :");
      scanf("%d %d", &a, &b);
      printf("\nSum is : %d", addition(a,b));
      break;
    case 2:
      printf("\nEnter two Numbers :");
      scanf("%d %d", &a, &b);
      printf("\nThe Difference is : %d", substraction(a,b));
      break;
    case 3:
      printf("\nEnter two Numbers :");
      scanf("%d %d", &a, &b);
      printf("\nTheir product is : %d", multiplication(a,b));
      break;
    case 4:
      printf("\nEnter two Numbers :");
      scanf("%d %d", &a, &b);
      printf("\nTheir Quotient is : %2f", division(a,b));
      break;
  }
  }
}
