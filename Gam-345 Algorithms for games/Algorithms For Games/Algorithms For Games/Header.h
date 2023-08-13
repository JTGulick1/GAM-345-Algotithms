#pragma once
#include <iostream>

using namespace std;

class Algorithms
{
public:
	void Merge(int *a, int leftsize, int *b, int rightside, int m)
	{
		int* answer = new int[leftsize + rightside];

		int leftIndex = 0;
		int rightIndex = 0;

		int lArray[3], rArray[3];

		//loop through both a and b at the same time , and taking the smaller emelent from each side
		// until we reach the end of one of the arrays
		for (int i = 0; i < 3; i++)
			lArray[i] = a[leftsize + i];
		for (int j = 0; j < 3; j++)
			rArray[j] = b[m + 1 + j];
		int i = 0;int j = 0;int k = leftsize;
		while (leftIndex < leftsize && rightIndex < rightside)
		{
			if (a[leftIndex] < b[rightIndex])
			{
				a[leftIndex] = lArray[i];
				i++;
				//put the element a[leftIndex] into answer
				// increment leftIndex
			}
			else
			{
				a[rightIndex] = rArray[j];
				j++;
			}
			k++;
		}
		// check if there's remaining data in array a, if so add it to the answer
		while (i < 3)
		{
			a[k] = lArray[i];
			i++; k++;
		}
		// check if there's remaining data in array b if so add it to the answer
		while (j < 3)
		{
			a[k] = lArray[j];
			j++; k++;
		}
		//finally, copy the data from the answer back to array a
	}

	void MergeSort(int* a, int size, int num)
	{
		if (num < size)
		{
			//Divide the data in half
			int halfsize = size / 2;
			int m = halfsize + (halfsize + 3) / 2;

			// sort the left side
			MergeSort(a, halfsize, 0);

			//sort the right side
			MergeSort(a + halfsize, halfsize, 0);

			//merge the data
			Merge(a, halfsize, a + halfsize, halfsize, m);

			num = 7;
		}		
	}

	int BinarySearch(int *a, int size, int value)
	{
		if (size <= value) {
			int mid = size + (value - size) / 2;

			if (a[mid] == 0)
				return mid;

			if (a[mid] > 0)
				return BinarySearch(a, size, mid - 1);

			return BinarySearch(a, mid + 1, size);
		}
		return -1;
	}

	void Print(int *a)
	{
		for (int i = 0; i < 6; i++)
		{
			std::cout << a[i] << " ";
		}
	}
private:

};
