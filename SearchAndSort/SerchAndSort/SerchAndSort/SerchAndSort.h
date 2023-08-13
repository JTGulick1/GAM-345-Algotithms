#pragma once
#include <iostream>

using namespace std;

class SAS
{
public:
	bool SequentialSearch(int* aArray, int aSize, int aValue)
	{
		for (size_t i = 0; i < aSize; i++)
		{
			if (aArray[i] == aValue)
			{
				cout << "Found: (" << aValue << ") in the Search!" << endl;
				return true;
			}
		}
		cout << "Did not find (" << aValue << ") in the Search" << endl;
		return false;
	}
	void InsertionSort(int* aArray, int aSize)
	{
		int a, key, b;
		for (a = 0; a < aSize; a++)
		{
			key = aArray[a];
			b = a - 1;

			while (b >= 0 && aArray[b] > key)
			{
				aArray[b + 1] = aArray[b];
				b--;
			}
			aArray[b + 1] = key;
		}
	}
	void printArray(int* aArray, int aSize)
	{
		cout << "Array 1: ";
		for (size_t i = 0; i < aSize; i++)
		{
			cout << aArray[i] << ",";
		}
		cout << endl;
	}
private:

};