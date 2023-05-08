#include <bits/stdc++.h> 
using namespace std; 
 
 
int main()
{

int n=5;
     for(int i=0; i<n; i++){
            for(int j{1}; j<n-i; j++){
                cout<<" ";
            }
            for(int j{0}; j<=i;j++){
                cout<<char('A' +j);
            }
            for(int j{i}; j>0; j--){
                cout<<char('A' +j);
            }
            cout<<endl;
        }
    return 0;
}