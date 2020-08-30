/* Write a program to find the largest of Numbers */
#include <stdio.h>
#include <stdlib.h>

int Largest(double n1, double n2, double n3){


    if (n1 >= n2 && n1 >= n3)
        printf("%.2f is the largest number.", n1);


    if (n2 >= n1 && n2 >= n3)
        printf("%.2f is the largest number.", n2);


    if (n3 >= n1 && n3 >= n2)
        printf("%.2f is the largest number.", n3);

    return 0;
}

int main(){
  double n1,n2,n3;
  printf("Enter three different numbers: ");
  scanf("%lf %lf %lf", &n1, &n2, &n3);
  Largest(n1,n2,n3);
}
