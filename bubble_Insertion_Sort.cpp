#include <bits/stdc++.h> 
using namespace std; 
 
void bubbleSort(int *arr, int n){

    for(int j =0; j<n-1; j++)
    {   int didSwap=0;
        for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

                didSwap++;
            }
            
            
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        if(didSwap==0){
            break;
        }
        
    }

}

void insertionSort(int *arr, int n){

    for(int i=1; i<n; i++){

        int j=i;
        while(j>0 && arr[j] < arr[j-1]) { 
                         
            int temp= arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;                    
            j--;
            
        }
    }
}


int main()
{
    int n= 7;
    int arr[n] = {9,12,14,15,6,8,13};
    //bubbleSort(arr, n);
    insertionSort(arr, n);
    cout<<"--------------------\n";
    for(auto i:arr){
        cout<<i<<" ";
    }
    
    return 0;
}
