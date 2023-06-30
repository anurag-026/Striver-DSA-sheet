#include <bits/stdc++.h>
using namespace std;


int main()
{

    string s="He-llo-Wo-rl-d";
    string s1,s2;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '-') s1+= '-';
        if(s[i] != '-') s2+=s[i];
    }
    cout<<s1+s2;

   return 0;
}