/*
 Selection Sort is one step up from bubble sort in terms of efficiency, it is essentially an optimization of bubble sort.
 Basically it involves repeatedly iterating over your list, searching for the minimum value, and moving it to the beginnig.
 Each iteration will start 1 item deeper into the list because the items being placed at the front are already in order.
 This algorithm is more efficient that bubble sort because it requires less writes (calls the swap function less)
 Where Bubble Sort may call swap many times for before a single cell has settled in its final place,
 Selection Sort will require at most n-1 swaps because a cell is only swapped once (when it is determined to be the next minimum)
 COMPLEXITY O(n^2)
 */
#include<stdio.h>
#include<stdlib.h>
void swap(int*, int*);
void selection_sort(int*, int);
int main(int nargs, char** args){
	int arr[] = { 0, 4, 1, 7, 6, 3, 2, 5, 9, 8, 10, 15, 12, 11, 14, 13, 19, 20, 18, 17, 16, 22, 21, 23, 24 };
	int n = 25;

	selection_sort(arr, n);

	for(int i=0; i<n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}
void selection_sort(int* arr, int n){
	int min, i, j;
	for(i=0; i<n-1; ++i){
		min = i;
		for(j=i; j<n; ++j)
			if (arr[j] < arr[min]) min = j;
		swap(&arr[i], &arr[min]);
	}
}
void swap(int* old, int* new){
	int hold = *old;
	*old = *new;
	*new = hold;
}
