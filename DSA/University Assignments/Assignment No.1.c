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

bool string_compare(char str[100], char str2[100]){
    int strsize = sizeof(str) / sizeof(char);
    for(int i = 0; i < strsize; ++i){
        if(str[i] != str2[i]) return false;
    }
    return true;
}

void string_copy(char str[100], char str2[100]){ //copies from str to str2
    int strsize = sizeof(str) / sizeof(char);
    int str2size = sizeof(str2) / sizeof(char);
    for(int i = 0; i < strsize; i++){
        str2[strsize + i] += str[i];
    }
    return;    
}



int main(){
    printf("----------------------Atharva Naphade--------------------\n");
    printf("---------------------------SE 8--------------------------\n");
    printf("---------------------------22404-------------------------\n");
    printf("-------------------Assignment No.1 Part A----------------\n");
    printf("1.Check Substring\n2.Check for Palindrome\n3.Compare Strings\n4.Copy String to another one\n5.Reverse a String\nEnter option : ");
    int i;
    repeat:
    scanf("%d", &i);
    switch(i){
        case 1:
           char str[100]; char sub[5];
           printf("\nEnter String : ");
           gets(str);
           printf("\nEnter SubString : ");
           gets(sub);
           if(substr(sub,str)) printf("\nSub String is present in the String");
        case 2:
           char str[100];
           printf("\nEnter String : ");
           gets(str);
           if(palindrome(str)) printf("\nString is Palindrome");
        case 3:
           char str[100]; char str2[100];
           printf("\nEnter First String : ");
           gets(str);
           printf("\nEnter 2nd String : ");
           gets(str2);
           if(string_compare(str, str2)) printf("\nBoth Strings are Equal");
        case 4:
           char str[100]; char str2[100];
           printf("\nEnter 1st String : ");
           gets(str);
           printf("\nEnter 2nd String : ");
           gets(str2);
           string_copy(str, str2);
           printf("\nString copied! The String is : %s", str2);
        case 5:
           char str[100];
           printf("\nEnter a string : ");
           gets(str);
           printf("\nThe Reverse of the string is : %s", reversestr(str));
    }
    goto repeat;
}