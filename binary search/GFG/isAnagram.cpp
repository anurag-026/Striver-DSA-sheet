
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



   
    bool isAnagram(string a, string b){
        
        // Your code here
        
        array<int , 26> a1= {0};
        array<int , 26> b1= {0};
        int alen = a.length(), blen = b.length();
        if(alen!= blen) return 0;
        
        for(int i=0;  ; i++){
            if(i<alen){
                a1[(a[i] -'a')] += 1;
            }
            if(i<blen){
                b1[(b[i] -'a')] += 1;
            }
            if(i >= alen && i >= i<blen  ) break;
            
        } 

        for(int i:a1) cout<<i<<" ";
        cout<<"\n";
        for(int i:b1) cout<<i<<" ";
        cout<<"\n";
        
        for(int i=0; i<26; i++){
            if(a1[i] != b1[i]) return false;
        }
        return true;
        
        
    }



int main() {
    
    
        string c = "aabadvwrvwfwwa", d="baaafwevwrvwrwvvwevwraa";
      
        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    

}
