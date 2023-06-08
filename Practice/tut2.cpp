#include <bits/stdc++.h>
using namespace std;


int main(){
    int n=0;
    int arr[n];
    arr[0]= 1111;
    for(int i=1; i<n; i++){
        if(arr[i-1] +1 == 0)
            continue;
        else     
            arr[i] = arr[i-1] +1;
    }

    for(int i=0; i<n; i++ )
        cout<<arr[i]<<" ";

}