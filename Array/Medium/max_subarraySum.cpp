/*
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number)
which has the maximum sum and return its sum.

*/

#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int a[], int n)
{
    int maxSum=INT_MIN;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n;j++ ){
            sum += a[j];
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;

}


int main()
{
    int n;

    //cin >> n; // input size of array

    int a[] = {1, 2 ,3, -2 ,5};
    n=5;

    //for (int i = 0; i < n; i++)
    //    cin >> a[i]; // inputting elements of array

    cout << maxSubarraySum(a, n) << endl;
}
