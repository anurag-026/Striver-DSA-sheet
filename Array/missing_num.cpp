#include <bits/stdc++.h>
using namespace std;

int missingNumberM1(int A[], int N)  // Time Complexity = O(NlogN) //Brute Force
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

int missingNumberM2(int A[], int N){    // Time Complexity = O(N)  Optimal
    long sum=0;
    for(int i=0; i<N-1; i++){
        sum= sum + A[i];
    }
    return ((N*(N+1)/2 ) - sum );
}

int missingNumberM3(int A[], int N){    // Time Complexity = O(N)  More Optimal   XOR Approach

    int xor1=0 , xor2= 0;

    for(int i=0; i<N-1; i++){
        xor1= xor1 ^ (i+1) ^ N;
        //xor1= xor1^N;
        xor2= xor2 ^ A[i];
    }
    return xor1^xor2;


}


int main()
{

    int i = 0, n;
    cin >> n;
    int a[n + 5];
    for (i = 0; i < n - 1; i++)
        cin >> a[i];

    cout << missingNumberM3(a, n) << endl;
}
// } Driver Code Ends

