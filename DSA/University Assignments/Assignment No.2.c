/*
 * main.c
 *
 *  Created on: Oct 9, 2020
 *      Author: Atharva Naphade
 */
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
	printf("\nSymbol for the Component is : %c", list.symbol);
	printf("\nThe number of %s Components are : %d", list.component, list.number);
	printf("\nThe cost of %s Component is : %d", list.component, list.cost);
}

int search_data(db list[5], char *search_symbol){
	int x;
	for(int i = 0; i < 5; ++i){
		if(*search_symbol == list[i].symbol){
			x = i;
			return x;
			break;
		}
	}
}

void modify_data(db list[5]){
    printf("\nEnter the value you want to modify\n1.Component Type\n2.Symbol\n3.Number of Components\n4.Cost");
    int i;
    scanf("%d", &i);
    int z, input_numbers, input_cost;
    char search_char1[100], input_char1[100], input_char2;
    switch(i){
        case 1:
           printf("\nEnter the Component symbol you want to replace : ");
           gets(search_char1);
           z = search_data(list, search_char1);
           printf("\nEnter the New Component Name : ");
           gets(list[z].component);
           break;
        case 2:
           printf("\nEnter the Component Symbol you want to replace : ");
           gets(search_char1);
           z = search_data(list, search_char1);
           printf("\nEnter the New Component Symbol : ");
           scanf("%c", &list[z].symbol);
           break;
        case 3:
           printf("\nEnter the Component Symbol you want to replace : ");
           gets(search_char1);
           z = search_data(list, search_char1);
           printf("\nEnter the New Component Number : ");
           scanf("%d", &input_numbers);
           list[z].number = input_numbers;
           break;
        case 4:
           printf("\nEnter the Component Symbol you want to replace : ");
           gets(search_char1);
           z = search_data(list, search_char1);
           printf("\nEnter the new Compoent Cost : ");
           scanf("%d", &input_cost);
           list[z].cost = input_cost;
           break;
        default:
        	printf("\nInvalid Input");
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
	db list[5];
	for(int i = 0; i < 5; i++){
		printf("Enter Component name : ");
		gets(list[i].component);
		printf("\nEnter Component Symbol : ");
		scanf("%c", &list[i].symbol);
		printf("\nEnter the Number of %c : ", list[i].symbol);
		scanf("%d", &list[i].number);
		printf("\nEnter the Cost of %c : ", list[i].symbol);
		scanf("%d", &list[i].cost);
	}
	modify_data(list);
}
