/*
 Bubble Sort is one of the more simple sorting algorithms, oftentimes people see it as intro to sorting algorithms or as part of an intro programming course.
 It functions by repeatedly iterating through a list and swapping adjacent items to move the "larger" item toward the end.
 Multiple iterations would be made until the sorting is complete, with a maximum iterations equal to the size of the list.
 Each iteration will be one item shorter than the previous because the items at the end would already be in order.
 */
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
void swap(int* old, int* new){
	int hold = *old;
	*old = *new;
	*new = hold;
}
void BubbleSort(int arr[], int n){
	size_t i,j;
	bool swapped = false;
	for (i=0; i<n-1; ++i){
		for(j=0; j<n-1-i; ++j){
			if ( arr[j] > arr[j+1] ){
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
		}
		if ( ! swapped ) return;
	}
}
int main(int nargs, char** args){
	int arr[] = { 0, 4, 1, 7, 6, 3, 2, 5, 9, 8, 10, 15, 12, 11, 14, 13, 19, 20, 18, 17, 16, 22, 21, 23, 24 };
	int n = 20;

	BubbleSort(arr, n);

	for(int i=0; i<n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}
