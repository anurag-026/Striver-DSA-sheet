
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

	int secondSmallest(int arr[],int n)
	{
    	if(n<2)
    	    return -1;
    	int small = INT_MAX;
    	int second_small = INT_MAX;
    	int i;
    	for(i = 0; i < n; i++) 
    	{
       		if(arr[i] < small)
       		{
          	second_small = small;
          	small = arr[i];
       		}
       		else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    	}
   		return second_small;     
	}

	int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
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
        cout <<"Method 1:  "<< ans << "\n";
		
    	cout<<"Second Largest is: "<<secondLargest(arr[], n)<<endl;
    	cout<<"Second Smallest is: "<<secondSmallest(arr[], n)<<endl;
    
    return 0;
}