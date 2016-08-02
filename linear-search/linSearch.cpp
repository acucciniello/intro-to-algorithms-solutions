//linSearch.cpp
#include "linSearch.h"

int linearSearch(int * A, int value, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		std::cout << A[i] << std::endl;
		std::cout << value << std::endl;
		if (A[i] == value)
		{
			return i;
		}
	}
	return -1;
}