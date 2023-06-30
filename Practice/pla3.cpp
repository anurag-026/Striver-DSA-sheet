#include <bits/stdc++.h>
using namespace std;

vector<int> convertBinary(int n){
    vector<int> binN;
    int i=0;
    while(n>0){
        binN.push_back( n % 2);
        n = n / 2;
        i++;
    }
    reverse(binN.begin() , binN.end());

    return binN;

}
bool checkPallindrome(vector<int>binN, int i){
    int n= binN.size();
    if(i>=n/2) 
        return 1;
    if(binN[i] == binN[n-1-i]) {
        return checkPallindrome(binN,i+1);
    }
    else 
        return 0;
}

int main()
{

    int n=4;
    vector<int> binN = convertBinary(n);
    for(auto i:binN){
        cout<<i<<" ";
    }
    cout<<"\n";
    bool check = checkPallindrome(binN , 0);
    if(check){
         cout<<"Pallindrome ";
         }
    else
     cout<<"Not pallindrone";
    


   return 0;
}