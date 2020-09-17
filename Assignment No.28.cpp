/* Write a program to reverse a string */
#include <stdio.h>

int main()
{
   char s[100];
   char s2[100];

   printf("Enter a string to reverse\n");
   gets(s);
   int size = 0, i = 0;
   while(s[i] != '\0'){
     size++;
     i++;
   }
  int flag = size;
   for(int l = 0; l < size; l++){
     s2[flag - 1] = s[l];
     flag--;
   }

   printf("Reverse of the string: %s\n", s2);

   return 0;
}
