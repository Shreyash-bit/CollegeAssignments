/* Write a Program to declare a structure of employee which has name , age, salary, mob.no, create a function to display the data */
#include <stdio.h>
#include <stdlib.h>

struct Employees{
   char name[100];
   int age;
   long long mobilenumber;
   int salary;
};

typedef struct Employees emp_data;

void getdata(emp_data emp){
    printf("Name : ");
    puts(emp.name);
    printf("\nAge : %d", emp.age);
    printf("\nMobile Number : %lli", emp.mobilenumber);
    printf("\nSalary : %d\n", emp.salary);
}

int main(){
    emp_data employees[5];
    char stop[4];
    for(int i = 0; i < 5; ++i){
        printf("\nEnter Name of Employee : ");
        gets(employees[i].name);
        printf("\nEnter Age of Employee : ");
        scanf("%d", &employees[i].age);
        printf("\nEnter the Mobile Number : ");
        scanf("%lli", &employees[i].mobilenumber);
        printf("\nEnter Salary of Employee : ");
        scanf("%d", &employees[i].salary);
        if(scanf("%s", &stop) && stop[4] == "stop"){
            break;
        }
    }
    for(int j = 0; j < 5; j++){
        getdata(employees[j]);
    }
}