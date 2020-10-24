#include <stdio.h>
#include <stdlib.h>

struct student_data{
    int roll;
    float cgpa;
    char name[50];
};

typedef struct student_data db;
FILE *main_fileptr, *temp;

void insert(){
    db st;
    fseek(main_fileptr, 0, 2);
    printf("\nEnter Roll No., Name, CGPA ");
    scanf("%d%s%f", &st.roll, &st.name, &st.cgpa);
    fprintf(main_fileptr, "%d%s%4.2f\n", st.roll, st.name, st.cgpa);
    fclose(main_fileptr);
    main_fileptr = fopen("Student.txt", "r+");  
}

void search(){
    db st;
    int roll;
    printf("\nEnter Roll No. : ");
    scanf("%d", &roll);
    rewind(main_fileptr);
    while(!feof(main_fileptr)){
        fscanf(main_fileptr, "%d%s%f\n", &st.roll, &st.name, &st.cgpa);
        if(st.roll==roll) printf("\n%D %s %4.2f", st.roll, st.name, st.cgpa);
        return;
    }
    printf("\nRecord not found!!");
}

void delete_data(){
    db st;
    int recno,i;
    printf("\nEnter the Record to Delete : ");
    scanf("%d", &recno);
    temp = fopen("temp.txt", "w+");
    rewind(main_fileptr);
    for(int i; i < recno && !feof(main_fileptr); i++){
        fscanf(main_fileptr, "%d%s%f\n", &st.roll, &st.name, &st.cgpa);
        fprintf(temp, "%d %s %4.2f\n", st.roll, st.name, st.cgpa);
    }
    if(feof(main_fileptr)){
        printf("\nRecord Not Found!!!");
    }
    else{
        
    }
}

int main(){
    int op, roll;
    db x;
    if(!(main_fileptr = fopen("Student.txt", "r+"))){
        main_fileptr = fopen("Student.txt", "w+");
    }
    do{
        printf("\nInsert");
        printf("\nDelete");
        printf("\nModify");
        printf("\nSearch");
        printf("\nDisplay Data");
        printf("\nQuit");
        printf("\nEnter you choice : ");
        scanf("%d", &op);
        switch (op){
        case 1: insert();break;
        case 2: delete_data();break;
        case 3: modify();break;
        case 4: search();break;
        case 5: print();break;}
    }while(op != 6);
}