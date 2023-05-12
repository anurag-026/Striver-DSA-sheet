//Check if array is sorted

#include <bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n)
{

    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool ans = arraySortedOrNot(arr, n);
        cout << ans << "\n";
    

    return 0;
}