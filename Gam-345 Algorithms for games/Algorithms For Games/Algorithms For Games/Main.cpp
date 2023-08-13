#include <iostream>
#include "Header.h"

using namespace std;

int main(int argc, char* argv[])
{
	Algorithms ALG;
	int Array[]{ 2,3,7,1,5,6 };
	int n = sizeof(Array) / sizeof(Array[0]);
	ALG.Print(Array);
	cout << endl;
	//ALG.MergeSort(Array, n, 0);
	ALG.Print(Array);
	cout << endl;
	int result = ALG.BinarySearch(Array, n - 1, 87);
	(result == -1) ? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;

	return 0;
}