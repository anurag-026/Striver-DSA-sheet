
#include <iostream>
#include <vector>
using namespace std; 

    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int a[N+1]={0};
        
        for(int i=0; i<=N ; i++){
            if(arr[i]>N){
                continue;
            }
            else
                a[arr[i]] +=1;
        }
        for(int i=1; i<=N; i++){
            arr[i-1] =a[i];
        }
        return ;
    }



//{ Driver Code Starts.

int main() 
{ 
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
       
        //calling frequncycount() function
		frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	
	return 0; 
}





