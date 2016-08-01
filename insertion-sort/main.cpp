//main.cpp

#include "insertionSort.h"
#include "../../random-array-generator/randGen.cpp"

int main()
{
	int size; 
	// need to allocate memory for the pointer to point to an array
	int * pArray= new int [size];
	int stat;

	std::cout << "How many numbers would you like to output?" << std::endl;
	std::cin >> size;
	
	stat = randomGen(size, pArray);
	std::cout << stat << std::endl;

	for(int i = 0;  i<size; i++)
	{
		std::cout << pArray[i] << std::endl;
	}

	stat = insertionSort(pArray, size);
	std::cout << stat << std::endl;

	for(int i = 0;  i<size; i++)
	{
		std::cout << pArray[i] << std::endl;
	}

	delete [] pArray;

	return 0;
}
