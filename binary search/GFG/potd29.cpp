//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

	
		int countBin(int n){
	    array<int , 31> arr={0};
	    int count=0, i=0;
	    while(n>0){
	        arr[i] = n%2;
            if(n%2 == 1) 
                count++;

	        n=n/2;
	        i++;
	    }
	    return count;
	}
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    long long sum=0;
	    for(int i=0; i<n ; i++){
	        for(int j=0; j<n; j++){
	            if(arr[i] == arr[j]) 
                    continue;
	            else  
                    sum = sum + abs(countBin(arr[i]) - countBin(arr[j]) );
	        }
	        
	    }
	    return sum;
	}


//{ Driver Code Starts.

int main() {
    
        int n=2;
        
        int arr[n] = {1,2};
       
        auto ans = sumBitDifferences(arr, n);
        cout << ans << "\n";
    
    return 0;
}
// } Driver Code Ends