#include <bits/stdc++.h>
using namespace std;

int *reverseA(int arr[], int i, int n)
{
    if (i >= n) return arr;
    swap(arr[i], arr[n]);
    reverseA(arr, i + 1, n - 1);
}

int *reverseArray(int arr[], int n)
{
    reverseA(arr, 0, n-1);
    return arr;
}



int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    reverseArray(arr, n);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}