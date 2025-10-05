#include <sortandsearch.h>
int main(){
	int a[] ={1,2,4,2,6,7,0};
	int a1[]={5,4,3,2,1};
	int a2[]={5,4,3,2,1};
	int a3[]={5,4,3,2,1};
	int a4[]={5,4,3,2,1};
	int a5[]={5,4,3,2,1};
	int r=linearsearch(a,7,0);
	int r2=binarysearch(a,0,6,7);
	printf("Linear Search Result= %d\n",r);
	printf("Binary Search Result= %d\n",r2);
	insertionsort(a1,5);
	printf("Insertion Sort:");
	printarray(a1,5);
	selectionsort(a2,5);
	printf("Selection Sort:");
        printarray(a2,5);
	bubblesort(a3,5);
	printf("Bubble Sort:");
	printarray(a3,5);
	quicksort(a4,0,5);
	printf("Quick Sort:");
        printarray(a4,5);
	mergesort(a5,0,4);
	printf("Merge Sort:");
        printarray(a5,5);
	return 0;
}
