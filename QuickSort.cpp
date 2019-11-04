#include<iostream>

using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
 
int getPivot(int arr[], int sI, int eI)
{
	int pivot = arr[eI];

	int i = (sI - 1);
	for (int j = sI; j <= eI -1; j++)
	{

		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[eI]);
	return (i + 1);
}

void quickSort(int arr[], int startIndex, int endIndex)
{
	if (startIndex < endIndex)
	{
		int  p;
		p = getPivot(arr,startIndex,endIndex);
		quickSort(arr, startIndex, p-1);
		quickSort(arr, p + 1, endIndex);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n ; i++)
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	int arr[5] = { 5,4,3,2,1 };
	
	quickSort(arr,0,4);

	printArray(arr, 5);

	return 0;
}