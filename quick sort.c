#include<stdio.h>
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition (int arr[], int small, int big)
{
	int pivot = arr[big];
	int i = (small - 1);

	for (int j = small; j <= big- 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[big]);
	return (i + 1);
}

void quickSort(int arr[], int small, int big)
{
	if (small < big)
	{
		int pi = partition(arr, small, big);

		quickSort(arr, small, pi - 1);
		quickSort(arr, pi + 1, big);
	}
}
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("n");
}
int main()
{ int size=10;
	int arr[size];
	int k;

	printf("Enter your element ::\n");
	for(k=0;k<size;k++)
	{
	scanf("%d",&arr[k]);
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, n-1);
	printf("Sorted array are: \n");
	printArray(arr, n);
	return 0;
}
