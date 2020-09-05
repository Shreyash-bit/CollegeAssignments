/* Write a program to copy one array element into another array */
#include <stdio.h>
#include <stdlib.h>

void copyarray(int *arr, int *arr2, int size){
	while(size--){
		*arr2 = *arr;
		arr2++;
		arr++;
	}
}

int main(){
	int i;
	printf("Enter Size of Array :");
	scanf("%d", &i);
	int arr[i];
	int arr2[i];
	while(i--){
		scanf("%d", &arr[i - 1]);
	}
	int *arrptr, *arr2ptr;
	arrptr = &arr[0];
	arr2ptr = &arr2[0];
	copyarray(arrptr,arr2ptr,i);
}
