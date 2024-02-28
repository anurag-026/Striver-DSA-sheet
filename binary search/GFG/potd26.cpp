#include<bits/stdc++.h>
using namespace std;


	vector<string> solve(int i, string s, string f) {
	    
    }
	
	
	vector<string> AllPossibleStrings(string s){
		    // Code here
	    vector<string> v;
	    v=solve(0, s, "");
	    return v;
		    
	}

int main(){
	
		string s= "abc";
		vector<string> res = AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";

	
	return 0;
}