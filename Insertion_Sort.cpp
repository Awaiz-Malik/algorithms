#include<iostream>
using namespace std;

void printArray(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}

void insertionSort(int A[], int n)
{
	int key = 0, j = 0;
	for (int i = 1; i <= n - 1; i++)
	{
		key = A[i];
		j = i - 1;

		while (j >= 0 && A[j] > key)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = key;

	}
}

int main()
{
	int A[] = { 12, 54, 65, 7, 23, 9 };
	int n = 6;
	cout << "Array before Sorting" << endl;
	printArray(A, n);
	insertionSort(A, n);
	cout << "Array after Sorting" << endl;
	printArray(A, n);
	return 0;
}
