
//Find Second Smallest and Second Largest Element in an array

#include <bits/stdc++.h> 
using namespace std; 
 
	int print2largest(int arr[], int n) {
	    // code here
	    int max_ = INT_MIN ,max2nd = INT_MIN;
	    int min_ = INT_MAX ,min2nd = INT_MAX;
	    
	    for(int i=0; i<n; i++){
	        max_ = max(arr[i], max_);
	        min_ = min(arr[i], min_);
	    }
	    
	    if(max_ == min_)
	        return -1;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i] != max_)
	            max2nd = max(arr[i], max2nd);
	    } 
	    
	    return max2nd;
	}

int main()
{

    int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = print2largest(arr, n);
        cout << ans << "\n";
    
    return 0;
}