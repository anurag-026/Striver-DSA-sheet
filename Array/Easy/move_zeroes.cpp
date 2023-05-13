#include <bits/stdc++.h>
using namespace std;

void pushZerosToEndM1(int arr[], int n)  // Time Complexity O(n)  Space Complexity O(1)  1 loop
{
    // code here
    for (int i = 0, j = 0; i < n;)
    {
        if (arr[j] != 0)
        {
            j++;
            i++;
        }

        else if (arr[j] == 0)
        {
            if (arr[i] != 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
            i++;
        }
    }
}

void pushZerosToEndM2(int a[], int n)   // Time Complexity O(n)   Space Complexity O(1)  2 loops
{   
    int j=0;
    for (int i = 0; i < n; i++)
    {   if(i==j) continue;
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }
    for (j; j < n; j++)
    {
        a[j] = 0;
    }
}

int main()
{
    int n;
    int arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // pushZerosToEndM1(arr, n);
    pushZerosToEndM2(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}