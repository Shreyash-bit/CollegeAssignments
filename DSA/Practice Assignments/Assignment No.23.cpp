/* Write a program to find how many palindrome numbers are in a array and print the numbers */
#include <stdio.h>
#include <stdlib.h>

int reverse(int n){
 int rev = 0;
 int d;
 while(n > 0){
   d = n % 10;
   rev = rev * 10 + d;
   n = n / 10;
 }
 return rev;
}

bool checkforpalindrome(int number){
 return (number == reverse(number));
}

int main(){
 int i;

 printf("Enter size of Array : ");
 scanf("%d", &i);
 int size = i;
 int arr[i];
 while(i--){

   printf("\nEnter array element %d : ", i);
   scanf("%d", &arr[i]);
 }
 int count = 0;
 while(size--){
   if(checkforpalindrome(arr[size]) == true){

     printf("\nThe Palindrome number is : %d", arr[size]);
     count++;
   }
 }
}
