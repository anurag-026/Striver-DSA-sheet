#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[] , int i, int n){

    if(i>=n/2) return;

    int temp=arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    reverseArray(arr, i+1, n);
 }


int main()
{   int n=9;
    int a[n] = {1,5,3,13,6,4,11,7,0};

    reverseArray(a,0,n);

    for(int i=0; i<n; i++)
     cout<<a[i]<<" ";



   return 0;
}