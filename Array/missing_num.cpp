#include <bits/stdc++.h>
using namespace std;

int missingNumberM1(int A[], int N)  //Used Sorting
{
    // Your code goes here

    sort(A, A + N);
    for (int i = 0; i < N; i++)
    {
        if (A[i] != i + 1)
        {
            return i + 1;
        }
    }
}

int main()
{

    int i = 0, n;
    cin >> n;
    int a[n + 5];
    for (i = 0; i < n - 1; i++)
        cin >> a[i];

    cout << missingNumber1(a, n) << endl;
    return 0;
}