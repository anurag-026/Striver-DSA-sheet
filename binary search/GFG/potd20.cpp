
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
     int wordBreak(int n, string A, vector<string> &B) {
        int i, j, k;
        unordered_set<string> us;
        for (i = 0; i < n; i++)
            us.insert(B[i]);
        int len = (int)A.size();
        vector<bool> dp(len + 1, false);
        dp[0] = true;
        for (int i = 1; i <= len; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (dp[j] && us.find(A.substr(j, i - j)) != us.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[len];
    }
};

//{ Driver Code Starts.

int main(){
    
   
        int n=6;
        vector<string> dict= {"lrbbmqb", "cd", "r", "owkk"};
     
        string line = "lrbbmqbabowkkab";
        
        Solution ob;
        cout<<ob.wordBreak(n,line, dict)<<"\n";
    
}

// } Driver Code Ends