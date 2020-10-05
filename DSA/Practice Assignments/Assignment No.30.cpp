/* Write a program to print each word of a sentence in a new line */
#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[100];
    gets(s);
    int size = 0, i = 0;
    while(s[i] != '\0'){
     size++;
     i++;
    }
    for (int j = 0; j < size; j++){
        if(s[j] == ' '){
            j++;
        }
        printf("\n%c", s[j]);
    }
    
}