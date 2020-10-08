/* Implement Database Management Using Arrays of Structures :
       A.With pointers to arrays
       B.Wihout using Pointers to arrays
    1.Create 2.Display 3.Modify 4.Append 5.Search 6.Sort */
#include <stdio.h>
#include <stdlib.h>

struct database{
    char component[100];
    char symbol;
    int number;
    int cost;
};

typedef struct database db;

void display_data(db list){
    puts(list.component);
    printf("\nSpecial Symbol : %c", list.symbol);
    printf("\nNumber of Components : %d", list.number);
    printf("\nCost of Component : %d", list.cost);
}

int search_data(db list[5], char search_symbol){
    int x;
    for(int i = 0; i < 5; ++i){
       if(search_symbol == list[i].symbol){
          x = i;
          return x;
          break; 
       }
    }
}

void modify_data(db list[5]){
    printf("\nEnter the value you want to modify\n1.Compenent Type\n2.Symbol\n3.Number of Components\n4.Cost");
    int i;
    scanf("%d", &i);
    int z;
    switch(i){
        case 1:
           char search_char1;
           char input_char1[100];
           printf("\nEnter the Component symbol you want to replace : ");
           gets(search_char1);
           z = search_data(list, search_char1);
           printf("\nEnter the New Component Name : ");
           gets(input_char1);
           list[z].component = input_char1;
        case 2:
           char input_char2;
           printf("\nEnter the Component Symbol you want to replace : ");
           gets(search_char1);
           z = search_data(list, search_char1);
           printf("\nEnter the New Component Symbol : ");
           gets(input_char2);
           list[z].symbol = input_char2;
        case 3:
           int input_numbers;
           printf("\nEnter the Component Symbol you want to replace : ");
           gets(search_char1);
           z = search_data(list, search_char1);
           printf("\nEnter the New Component Number : ");
           scanf("%d", &input_numbers);
           list[z].number = input_numbers;
        case 4:
           int input_cost;
           printf("\nEnter the Component Symbol you want to replace : ");
           gets(search_char1);
           z = search_data(list, search_char1);
           printf("\nEnter the new Compoent Cost : ");
           scanf("%d", &input_cost);
           list[z].cost = input_cost;
    }
}

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort_data(db list[5]){
    for(int i = 0; i < 5; ++i)
      for(int j = 0; j < 5 - i; ++j)
         if(list[j].cost > list[j + 1].cost)
           swap(&list[j].cost, &list[j + 1].cost);
}

int main(){
    printf("Enter the data : ");
    db list[5];
    for(int i = 0; i < 5; ++i){
        char component1[100];
        char symbol1;
        int cost1;
        int number1;
        printf("\nEnter the Component Name : ");
        gets(component1);
        printf("\nEnter the Component Symbol : ");
        gets(symbol1);
        printf("\nEnter the Number of Component %s : ", component1);
        scanf("%d", &number1);
        printf("\nEnter the Cost of the Component %s : ", component1);
        scanf("%d", &cost1);
        list[i].component = component1;
        list[i].symbol = symbol1;
        list[i].number = number1;
        list[i].cost = cost1;
    }
    while(true){
       printf("\nEnter the opearation you want to do\n1.Display Data\n2.Search Data\n3.Modify Data\n4.Sort Data");
       int z;
       scanf("%d", &z);
       switch(z){
            case 1:
                for(int k = 0; k < 5; k++){
                    display_data(list);
              }
            case 2:
                char search_symbol;
                printf("\nEnter the Symbol You want to Search ; ");
                gets(search_symbol);
                int l = search_data(list, search_symbol);
                display_data(list[l]);
            case 3:
                modify_data(list);
            case 4:
                sort_data(list);
                for(int s = 0; s < 5; ++s){
                    display_data[s];
                }
       }
    }
}
