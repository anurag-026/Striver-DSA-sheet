//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// a[n] = {1,2,3,4,2,3,4,6,6};
int LongestConsecutiveSubs(int a[], int n){

    map<int , int > mpp;
    for(int i=0; i<n; i++){
            mpp[a[i]] = i;
    }
    
    for(int i=0; i<n ; i++){
        if(mpp[i] == (mpp[i] +1)){

        }
    }

    return 0;
}


int main()
{
    int n = 9;

    int a[n] = {1,2,3,4,2,3,4,6,6};

   

    int l =LongestConsecutiveSubs(a, n);

    

    cout<<"\n"<<l << endl;
}

// } Driver Code Ends