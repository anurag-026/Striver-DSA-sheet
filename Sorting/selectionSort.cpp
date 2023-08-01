#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n=5;
    int  arr[n]={1,8,4,2,6};
    
    for(int i=0; i<n; i++){
        int min_idx= i;
       for(int j=i+1; j<n; j++){
            if(arr[j] > arr[j+1]){
                min_idx= j;
            }
            int temp= arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i]= arr[min_idx]; 
       }
    
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}