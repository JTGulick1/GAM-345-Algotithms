#include <iostream>
#include "SerchandSort.h"

using namespace std;

int main(int argc, char* argv[])
{
	int Array1[7]{ 4,2,7,8,3,1,9 };
	int size = sizeof(Array1) / sizeof(Array1[0]);
	SAS sas1;
	sas1.printArray(Array1, size);
	sas1.SequentialSearch(Array1, size, 9);
	sas1.SequentialSearch(Array1, size, 5);
	sas1.InsertionSort(Array1, size);
	sas1.printArray(Array1, size);
	return 0;
}