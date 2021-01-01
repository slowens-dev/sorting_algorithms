/*
 Insertion Sort is more efficient than Bubble and Selection Sort but is still not typically a standalone process
 Usually it is used as a subprocess for a more complicated sorting
 Requires more writes than selection sort because subarrays may be shifted
 If writes are more expensive than reads (flash memory) then Selection Sort is preferred
 Insertion Sort is 
	Stable: items with matching keys preserve their relative order
       	In-place: sorted items occupy the same memory space as the original
	Adaptive: the algorithm speeds up when the list is already partly sorted
 Insertion Sort works kind of like sorting playing cards in your hand.
 You will iterate through your list focusing on one card each time
 for each card, until you reach index 0 or the card to the left is less than the focused card
 you will insert the focused card in front of the card being compared to, shifting everything that follows by 1
 instead of manually shifting everything that follows a shiftpoint you can simply swap the focused card repetitively to the left
 COMPLEXITY O(n^2)
 */
#include<stdio.h>
#include<stdlib.h>
void swap(int*, int*);
void insertion_sort(int*, int);
int main(int nargs, char** args){
	int arr[] = { 0, 4, 1, 7, 6, 3, 2, 5, 9, 8, 10, 15, 12, 11, 14, 13, 19, 20, 18, 17, 16, 22, 21, 23, 24 };
	int n = 25;

	insertion_sort(arr, n);

	for(int i=0; i<n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}
void insertion_sort(int* arr, int n){
	int  i, j, val;
	for(i=1; i<n-1; ++i){
		for(j=i; j>0 && (arr[j-1] > arr[j]); --j)
			swap(&arr[j], &arr[j-1]);
	}
}
void swap(int* old, int* new){
	int hold = *old;
	*old = *new;
	*new = hold;
}
