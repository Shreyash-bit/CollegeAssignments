/* Perform following string operations without using the library functions

A. With pointers to arrays b. Without pointers to arrays

1.Check Substring, 2.Check if String is Palindrome, 3.Compare two Strings, 4.Copy one String to other, 5.Reverse a String  */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool substr(char sub[5], char str[100]){
    int subsize, strsize;
    bool flag = false;
    strsize = sizeof(str) / sizeof(char);
    subsize = sizeof(sub) / sizeof(char);
    for(int i = 0; i < strsize; ++i){
        if(str[i] == sub[0]){
            for(int j = 0; j < subsize; ++j){
                if(str[i + j] == sub[j]) flag = true;
                else flag = false;
            }
        }
    }
    return flag;
}

char reversestr(char str[100]){
   int size = 0, i = 0;
   char str2[100];
   while(str[i] != '\0'){
    size++;
    i++;
   }
   int flag = size;
   for(int l = 0; l < size; l++){
    str2[flag - 1] = str[l];
    flag--;
   }
   return str2;
}

bool palindrome(char str[100]){
    int strsize = sizeof(str) / sizeof(char);
    char str2[100] = reversestr(str);
    bool flag = false;
    for(int i = 0; i < strsize / 2; ++i){
          if(str2[i] == str[i]){
              flag = true;
          }
          else flag = false;
    }
    return flag;
}

int main(){

}