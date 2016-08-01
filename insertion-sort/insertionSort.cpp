//insertionSort.cpp

#include "insertionSort.h"

int insertionSort(int * A, int n)
{
	int i;
	int j = 1;
	int key;
	
	for (j = 1; j < n; j++)
	{
		key = A[j];
		i = j - 1;
		while( i >= 1 && A[i] > key)
		{
			A[i + 1] = A[i];
			i = i - 1;
		}
		A[i + 1] = key;
	}
	return 1;
}