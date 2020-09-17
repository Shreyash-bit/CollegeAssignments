/* Write a program to find size of a string W/o using inbuilt function */
#include <stdio.h>

int main(){
  char string1[100];
  scanf("%s", &string1);

  int size = 0, i = 0;
  while(string1[i] != '\0'){
    size++;
    i++;
  }
  printf("\nsize of array is : %d", size);
}
