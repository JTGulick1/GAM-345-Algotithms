#include <iostream>
#include "GAM345.h"

using namespace std;

int main(int argc, char* argv[])
{
	int Arr1[]{ 1,3,2,4,6,5 };
	int size1 = sizeof(Arr1) / sizeof(Arr1[0]);
	QuickSortVSMergeSort QVS;
	cout << "Unsorted Quicksort" << endl;
	QVS.print(Arr1, size1);
	QVS.QuickSort(Arr1, Arr1[0], Arr1[size1 - 1]);
	cout << "Sorted Quicksort" << endl;
	QVS.print(Arr1, size1);
	int Arr2[]{ 1,3,2,4,6,5 };
	int size2 = sizeof(Arr2) / sizeof(Arr2[0]);
	cout << endl;
	cout << "Unsorted MergeSort" << endl;
	QVS.print(Arr2, size2);
	QVS.mergeSort(Arr2, 0, size2 - 1);
	cout << "Sorted MergeSort" << endl;
	QVS.print(Arr2, size2);
	return 0;
}