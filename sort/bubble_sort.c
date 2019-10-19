#include<stdio.h>

void bubbleSort(int arr[], int len)
{
	int i, j, temp;
	for(i = 0; i < len - 1; i++)
	{
		for(j = 0; j < len - 1 - i; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void printArr(int arr[], int len)
{
	for(int k = 0; k < len; k++)
	{
		printf("%d\n", arr[k]);
	}
}

int main()
{
	int arr[] = {1, 23, 45, 16, 34, 78, 24, 67, 45, 3};
	int len = (int) sizeof(arr) / sizeof(*arr);
	bubbleSort(arr, len);
	printArr(arr, len);
	return 0;
}
