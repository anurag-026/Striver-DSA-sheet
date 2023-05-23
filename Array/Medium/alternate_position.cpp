#include <bits/stdc++.h> 
using namespace std; 
 
 
int main()
{

      int n;
    cin >> n; // input size of array

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i]; // inputting elements of array

    cout << maxSubarraySum(a, n) << endl;

    return 0;
}