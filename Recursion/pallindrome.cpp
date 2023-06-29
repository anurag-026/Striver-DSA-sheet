#include <bits/stdc++.h>
#include<string>
using namespace std;


bool checkPallindrome(string s ,int i){
    int n =s.size();
    if(i>=n/2) 
        return 1;
    if(s[i] == s[n-1-i]) {
        return checkPallindrome(s,i+1);
    }
    else 
        return 0;
}

int main()
{
    string s="numan";
    if(checkPallindrome(s,0) ) cout<<"pallindrome";
    else cout<<"not pallindrome";
    
    
   return 0;
}
