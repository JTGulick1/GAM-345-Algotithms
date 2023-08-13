#pragma once
#include <iostream>

using namespace std;

class QuickSortVSMergeSort {
public:
    void QuickSort(int arr[], int low, int high)
    {
        if (low < high)
        {
            int pi = partition(arr, low, high);

            QuickSort(arr, low, pi - 1);
            QuickSort(arr, pi + 1, high);
        }
    }
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++)
        {

            if (arr[j] <= pivot)
            {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[high]);
        return (i + 1);
    }
    void swap(int* a, int* b) //Swaps the higher number with the lower number
    {
        int swap = *a;
        *a = *b;
        *b = swap;
    }


    void mergeSort(int arr[], int left, int right) {
        if (left >= right) {
            return;
        }
        int m = left + (right - left) / 2;
        mergeSort(arr, left, m);
        mergeSort(arr, m + 1, right);
        merge(arr, left, m, right);
    }
    void merge(int arr[], int left, int middle, int right)
    {
        int n1 = middle - left + 1;
        int n2 = right - middle;

        int Larr[3], Rarr[3]; // temp arrays

        for (int i = 0; i < n1; i++)
            Larr[i] = arr[left + i];
        for (int j = 0; j < n2; j++)
            Rarr[j] = arr[middle + 1 + j];
        int i = 0;
        int j = 0;
        int k = left;

        while (i < n1 && j < n2) {
            if (Larr[i] <= Rarr[j]) {
                arr[k] = Larr[i];
                i++;
            }
            else {
                arr[k] = Rarr[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = Larr[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = Rarr[j];
            j++;
            k++;
        }
    }
	void print(int* arr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
};
