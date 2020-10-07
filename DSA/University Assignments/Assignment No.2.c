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
    printf("\nComponent : %s", list.component);
    printf("\nSpecial Symbol : %s", list.symbol);
    printf("\nNumber of Components : %d", list.number);
    printf("\nCost of Component : %d", list.cost);
}



int main(){

}
