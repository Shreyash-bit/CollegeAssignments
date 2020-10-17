/* Write a program to create a text file and write Students Data in it */
#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[100];
    int rollno;
    char city[10];
    int age;
};

typedef struct student db;

int main(){
    FILE *fileptr;
    int i;
    printf("\nEnter the Number of students you want to enter the data of : ");
    scanf("%d", &i);
    db student_data[i];
    for(int j = 0; j < i; j++){
        printf("\nEnter the Name of the student : ");
        gets(student_data[j].name);
        printf("\nEnter the Roll Number of the student : ");
        scanf("%d", &student_data[j].rollno);
        printf("\nEnter the City the student lives in : ");
        gets(student_data[j].city);
        printf("\nEnter the age of the student : ");
        scanf("%d", &student_data[j].age);
    }
    fileptr = fopen("Student.txt", "w");
    if(fileptr == NULL){
        printf("\nFile annot be opened");
    }
    else{
        for(int k = 0; k < i; k++){
            fputs("\n", fileptr);
            fputs("Name : ", fileptr);
            fputs(student_data[k].name, fileptr);
            fputs("\nRoll No : ", fileptr);
            putw(student_data[k].rollno, fileptr);
            fputs("\nCity : ", fileptr);
            fputs(student_data[k].city, fileptr);
            fputs("\nAge : ", fileptr);
            putw(student_data[k].age, fileptr);
        }
    }
}