//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// a= {16 , 17 ,4,3,5,2}
vector<int> leaders(int a[], int n)
{
    // Code here
    vector<int> ans;
    int i = n - 2, j = 0;
    int max = a[n - 1];
    ans.push_back(a[n - 1]);
    for (i; i >= 0; i--)
    {

        if (a[i] >= max)
        {
            ans.push_back(a[i]);
            max = a[i];
        }
    }
    reverse(ans.begin() , ans.end());
    


    return ans;
}

int main()
{
    int n = 6;

    int a[n] = {16, 17, 4, 3, 5, 2};

   

    vector<int> v = leaders(a, n);

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}

// } Driver Code Ends