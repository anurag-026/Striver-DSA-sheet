#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;


    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while (arr[j] > pivot && j >= low + 1){
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);

    return j;
}

void qS(int *arr, int low, int high)
{

    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        qS(arr, low, pIndex - 1);
        qS(arr, pIndex + 1, high);
    }
}

void quickSort(int *arr, int n)
{
    qS(arr, 0, n - 1);
}

int main()
{

    int arr[8] = {4, 2, 6, 2, 8, 3, 9, 5};

    quickSort(arr, 8);
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
