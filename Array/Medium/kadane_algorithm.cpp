#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int a[], int n)
{
    long long maxi = INT_MIN, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (sum > maxi)
            maxi = sum;

        if (sum <= 0)
            sum = 0;
    }
    return maxi;
}

int main()
{
    int n;
    cin >> n; // input size of array

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i]; // inputting elements of array

    cout << maxSubarraySum(a, n) << endl;
}