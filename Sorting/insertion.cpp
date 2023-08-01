#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n=5;
    int  arr[n]={1,8,4,2,6};
    
    for(int i=1; i<n; i++){

        int j=i;
        while(j>0 && arr[j] < arr[j-1]){
            int temp=arr[j];
            arr[j] = arr[j-1];
            arr[j-1]=temp;

            cout<<j<<": ";
            j--;
            for(auto element: arr ){
            cout<<element<<" ";
            }
            cout<<endl;
        }       
    }
    
    return 0;
}