#include <bits/stdc++.h>
using namespace std;

void leftRotateM1(int a[], int k, int n)
{
    // Your code goes here
    
    k = k % n;
    int temp[k];
    for (int i = 0; i < k; i++)  // O(k)
    {
        temp[i] = a[i];
    }

    for (int i = k; i < n; i++) //O(n-k)
    {
        a[i - k] = a[i];
    }
    
    for (int i = n-k; i < n; i++) // O(k)
    {
        a[i] = temp[i - (n-k)];
        
    }
    // Time Complexity = O(k) + O(n-k) + O(k) ==>  O(n+k)
    // Space Complexity (extra)= O(k)    using array temp of k size


}


void leftRotateM2(int a[], int k, int n){
    k=k%n;
    reverse(a,a+k);
    reverse(a+k, a+n);
    reverse(a,a+n);

    // Time Complexity = O(k) + O(n-k) + O(n) ==>  O(2n)
    // Space Complexity (extra)= O(1)   Not using any extra space

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

    leftRotateM2(a, k, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n";

    return 0;
}