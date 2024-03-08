#include <bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

bool sameFreq(string s)
{
    if (s.length() <= 2)
        return 1;
    vector<char, int> hash;
    hash[s[0]] = 1;
    for (int i = 1; i < s.length(); i++)
        {
            
           if( hash[s[i]] ==0){
                hash.push_back(s[i] , 1);
            }
            else 
                hash[s[i]] +=1;

        }
    

    auto p = *max_element(hash.begin(), hash.end());
    int maxi = p->second;

    for (int i = 0; i < s.length(); i++){

        if (hash[s[i]] == maxi || hash[s[i]] == maxi - 1)
            continue;
        else
            return 0;
    }
    return 1;
}

int main()
{
    string s = "abccd";
    cout << sameFreq(s);
}