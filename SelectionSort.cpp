#include <iostream>
#include <conio.h>

using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int indexOfMinimum(int arr[], int startIndex, int n)
{
	int minIndex = startIndex;
	for (int i = startIndex+1; i < n; i++)
	{
		if (arr[i] < arr[minIndex])
		{
			minIndex = i;
		}
	}

	return minIndex;
}

void selectionSort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = indexOfMinimum(arr, i, n);
		swap(&arr[min], &arr[i]);

	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	int arr[6] = { 6,5,4,3,2,1 };
	selectionSort(arr,6);

	printArray(arr, 6);

	_getch();
	return 0;
}