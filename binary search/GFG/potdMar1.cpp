
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
    // Your code here
    int low = arr[0], high = arr[n - 1], mid = (low + high) / 2;

    if (arr[0] > arr[1])
        return arr[0];
    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];

    while (low <= high)
    {

        if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
            return arr[mid];

        if (arr[mid] < arr[mid - 1])
            high = mid - 1;
        if (arr[mid] < arr[mid + 1])
            low = mid + 1;

        mid = (low + high) / 2;
    }
}

int main()
{

    int n = 3;

    int a[n] = {1, 2, 3};

    int A = peakElement(tmp, n);

    cout << A << endl;

    return 0;
}
// } Driver Code Ends