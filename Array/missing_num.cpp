#include <bits/stdc++.h>
using namespace std;

int missingNumberM1(int A[], int N)  // Time Complexity = O(NlogN)
{
    // Your code goes here

    sort(A, A + (N-1));

    for (int i = 0; i < N ; i++)
    {
        if (A[i] != i + 1)
        {
            return i + 1;
        }
    }
}

int missingNumberM2(int A[], int N){    // Time Complexity = O(N)
    long sum=0;
    for(int i=0; i<N-1; i++){
        sum= sum + A[i];
    }
    return ((N*(N+1)/2 ) - sum );
}


int main()
{

    int i = 0, n;
    cin >> n;
    int a[n + 5];
    for (i = 0; i < n - 1; i++)
        cin >> a[i];

    cout << missingNumberM1(a, n) << endl;


}
// } Driver Code Ends

