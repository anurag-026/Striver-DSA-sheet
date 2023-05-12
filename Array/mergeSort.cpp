#include <bits/stdc++.h> 
using namespace std; 
 
void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         vector<int> temp;
         int left = l , right= m+1;
         
        while(left <=m && right <= r  ){
         
            if(arr[left] >= arr[right]){
                temp.push_back(arr[right]);
                 right++;
            } 
            else{
                 temp.push_back(arr[left]);
                 left++;                 
             }

                     
        }

        while(left<= m){
            temp.push_back(arr[left]);
            left++;
            
        }
        while(right<= r){
            temp.push_back(arr[right]);
            right++;
            
        }
        

        for(int j=l; j<=r; j++ ){
            arr[j] = temp[j-l];
        }
         
         
    }

    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l >= r) return;
        
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge( arr, l, mid, r); 
        
        
        
    }
 
int main()
{

    int arr[7] = {5,7,2,9,6,8,1};
    mergeSort(arr, 0, 6);
    for(auto i:arr){
        cout<<i<<" ";
    }
    
    return 0;
}