#include <bits/stdc++.h> 
using namespace std; 


int  indexOf(int *arr, int n, int pivot){

    for(int i=0; i<n ;i++ ){
        if(arr[i] == pivot){
            return i;
        }
    }

}


int partition(int *arr, int low, int high ){

    int pivot;
    
    pivot = arr[low];
    int i= low, j= high;

   
    for(i , j; i<j ; i++, j-- ){
        if(arr[i] > pivot && arr[j] <pivot ){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    
    if(i>j){
        int temp= arr[0];
        arr[0] =arr[j];
        arr[j] = temp;
    }

    for(int i=0; i<= low+high  ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<j<<endl;
    return j;
}

void qS(int *arr, int low, int high){

    if(low < high) {
        int pivot = partition(arr, low, high);
        qS(arr, low, pivot-1); 
        qS(arr, pivot+1, high); 
    }

}

 
void quickSort(int *arr, int n){
    qS(arr, 0, n-1);
}

 
int main()
{

    int arr[8] = {4,2,6,1,8, 3,9,5};

    quickSort(arr, 8);
    //int p = partition(arr, 0,7);
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }



    
    return 0;
}