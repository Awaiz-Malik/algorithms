#include<iostream>
using namespace std;

int linearSearch(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int A[] = { 12, 54, 65, 7, 23, 9 };
    int n = 6;
    int key = 23;

    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    int index = linearSearch(A, n, key);

    if (index != -1)
        cout << "Element " << key << " found at index " << index << endl;
    else
        cout << "Element " << key << " not found in the array" << endl;

    return 0;
}
