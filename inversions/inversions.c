//inversions.c
//Problem 2-4 part d on page 42
//This completes a merge-sort on a hard coded array that returns the amount of inversions
// ( when index i is less than index j and A[i] < A[j], then pair(i, j) is an inversion of A)
//Paramaters:
// aPtr : pointer to array of values
// A[]  : array of vales to be sorted
// p 	: integer representing the starting index of the array
// r 	: integer representing the ending index of the array
// q 	: integer representing the middle index of the array
#include <stdio.h>

#define NUM_ELEMENTS 5

int merge_sort(int *, int, int);
int merge(int *, int, int, int);
int main()
{
	int* aPtr;
	//starting index
	int  p = 0;
	//ending index
	int r = NUM_ELEMENTS - 1;
	int A[NUM_ELEMENTS] = { 2, 3, 5, 6, 4}; 
	

	aPtr = A;
	/*for (int z = 0; z < NUM_ELEMENTS; z++){
		printf("%i\n", aPtr[z]);
	}*/
	int invers = merge_sort(aPtr, p, r);

	printf("The Number of inversions is : %i\n", invers);
}
int merge_sort(int * arrayPointer, int p, int r)
{
	/*for (int z = 0; z < NUM_ELEMENTS; z++){
		printf("%i\n", arrayPointer[z]);
	}*/
	if (p < r)
	{
		//printf("%i\n", p);
		//printf("%i\n", r);
		int inversions = 0;
		//find middle index q
		int q = (p + r) / 2;
		//recursively split up the array until it bottons out at size 1
		inversions = inversions + merge_sort(arrayPointer, p, q);
		inversions = inversions + merge_sort(arrayPointer, q + 1, r);
		//merge the two arrays 
		inversions = inversions + merge(arrayPointer, p, q, r);
		
		return inversions;
	}
	else
		return 0;
}

int merge(int * arrayPointer, int p, int q, int r)
{
	/*for (int z = 0; z < NUM_ELEMENTS; z++){
		printf("%i\n", arrayPointer[z]);
	}*/
	int n1;
	int n2;
	n1 = q - p + 1;
 	n2 = r - q;
	int L[n1];
	int R[n2];
	int i = 0;
	int j = 0;
	int k = 0;
	int inversions = 0;

 	

 	for(i = 0; i < n1; i++){
 		L[i] = arrayPointer[p + i];
  	}

 	for(j = 0; j < n1; j++){
 		R[j] = arrayPointer[q + j + 1];
  	}

  	i = 0;
  	j = 0;
  	for (k = p; k < r; k++){
  		if (i == n1){
  			arrayPointer[k] = R[j+1];
  		}
  		else if (j > n2 || L[i] <= R[j]){
  			arrayPointer[k] = L[i+1];
  		}
  		else{
  			arrayPointer[k] = R[j+1];
  			inversions = inversions + n1 - i;
  		}
  	}
  	
  	return inversions;
}