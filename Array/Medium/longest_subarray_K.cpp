#include <bits/stdc++.h>
using namespace std;

int lenOfLongSubarr_M1(int A[], int N, int K) // Brute Force, T.C.(worst Case)=  O(n^2)
{
    // Complete the function
    int maxi = 0;
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = i; j < N; j++)
        {
            sum = sum + A[j];
            if (sum == K)
            {
                maxi = max(maxi, j - i + 1);
            }
        }
    }

    return maxi;
}

int lenOfLongSubarr_M2(int A[], int n, int K)   // T.C.(worst Case)=  O(2n)
{
    int sum = A[0], maxlen = 0;
    int right = 0, left = 0;
    while (right < n)
    {
        while (left <= right && sum > K)
        {
            sum = sum - A[left];
            left++;
        }

        if (sum == K)
        {
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if (right < n)
            sum = sum + A[right];
    }
    return maxlen;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    //n=10,20,30,40
    // a= {}
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << lenOfLongSubarr_M2(a, n, k) << endl;

    return 0;
}