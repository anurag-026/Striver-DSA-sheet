#include <bits/c++.h>
using namespace std;

void mergeSort(int [] arr,int low,int high){
    if(low==high) return;
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    mergeArr(arr, low , mid, high);
}
void mergeArr(int [] arr , int low, int mid, int high){
    if(arr[low] >arr[mid])
        return;

}

int main(){

    int n=9;
    int arr[9]= {4,2,7,5,8,4,6,9,1};

    mergeSort(arr, 0,8);



    return 0;
}