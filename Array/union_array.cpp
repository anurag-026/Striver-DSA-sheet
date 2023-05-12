#include <bits/stdc++.h>
using namespace std;

 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        
        vector<int> v;
        int i = 0, j = 0; 

        for(int i=0; i<n; i++){
            
        }

        while(i<n ){
                v.push_back(arr1[i]);
                i++;
                }
        while (j<m)
        {          
                v.push_back(arr2[j]);
                j++;           
        }

        return v;
    }

int main()
{
    	int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	   
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(auto i: ans)
            cout<<i<<" ";

	    cout << endl;
	    
	
	
	return 0;
}