#include <bits/stdc++.h>
using namespace std;


int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    /*
        for(i , j; i<j ; i++, j-- ){
            if(arr[i] > pivot && arr[j] <pivot ){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }

        if(i>j){
            int temp= arr[0];
            arr[0] =arr[j];
            arr[j] = temp;
        }

        for(int i=0; i<= low+high  ; i++){
            cout<<arr[i]<<" ";
        }
    */

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

    int arr[8] = {4, 2, 6, 1, 8, 3, 9, 5};

    quickSort(arr, 8);
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}