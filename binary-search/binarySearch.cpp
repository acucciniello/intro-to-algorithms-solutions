//binarySearch.cpp
#include "binarySearch.h"

int binarySearch(int * A, int n, int v)
{
	int mid;
	int low = 0;
	int high = n;
	while(low <=high){
		mid = (high + low)/2;
		if (A[mid] == v)
		{
			return mid;
		}
		else if(A[mid] < v)
		{
			low = mid + 1;
		}
		else if(A[mid] > v)
		{
			high = mid - 1;
		}
	}
	return 0;
}