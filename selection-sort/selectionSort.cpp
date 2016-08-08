//selectionSort.cpp
#include "selectionSort.h"

int selectionSort(int * A, int n)
{
	int i;
	int j;
	int min;
	int temp;
	for (i = 0; i < n; i++)
	{
		min = i;
		for(j = i+1;  j <= n; j++)
		{
			if(A[j] < A[min])
			{
				min = j;
			}
		}
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
	if (A == NULL)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}