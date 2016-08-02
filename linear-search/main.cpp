//main.cpp

#include "linSearch.h"
#include "../../random-array-generator/randGen.cpp"

int main()
{
	int size; 
	// need to allocate memory for the pointer to point to an array
	int * pArray= new int [size];
	int stat;
	int indexVal = 282475249;

	std::cout << "How many numbers would you like to output?" << std::endl;
	std::cin >> size;
	
	stat = randomGen(size, pArray);
	std::cout << stat << std::endl;

	for(int i = 0;  i<size; i++)
	{
		std::cout << pArray[i] << std::endl;
	}

	stat = linearSearch(pArray, indexVal, size);
	std::cout << stat << std::endl;

	delete [] pArray;

	return 0;
}
