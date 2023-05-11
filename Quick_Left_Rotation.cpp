#include <bits/stdc++.h>
using namespace std;

void leftRotateM1(int a[], int k, int n)
{
    // Your code goes here
    
    k = k % n;
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = a[i];
    }

    for (int i = k; i < n; i++)
    {
        a[i - k] = a[i];
    }
    
    for (int i = n-k; i < n; i++)
    {
        a[i] = temp[i - (n-k)];
        
    }
}

void revArray( int a[], int start, int end ){
    
}


void leftRotateM1(int a[], int k, int n){

    revArray(a, 0, k);
    revArray(a, k+1, n);






}

int main()
{

    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n] ;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    leftRotateM1(a, k, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n";

    return 0;
}