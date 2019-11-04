#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			bool isSwapped = false;
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				isSwapped = true;
			}

			if (!isSwapped)
				break;
		}
	}
}

void printArray(int arr[],int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[5] = { 6,5,4,3,2};

	BubbleSort(arr, 5);

	printArray(arr,5);

	return 0;

}