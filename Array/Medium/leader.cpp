#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{
    
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
    int n = 7;

    int a[n] = {17,25,15,7,8,1,5};

    vector<int> v = leaders(a, n);

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;
}

// } Driver Code Ends