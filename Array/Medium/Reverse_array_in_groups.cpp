#include <bits/stdc++.h> 
using namespace std; 
 

  void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int idx=0;
        while(n>0){
            
            if(k>n){
                int t = 1;
                for(int i=idx;i<idx+n/2;i++){
                    long long s = arr[i];
                    arr[i]=arr[idx+n-t];
                    arr[idx+n-t]=s;
                    t++;
                }
                n=0;
            }else{
                
                int t = 1;
                for(int i=idx;i<idx+k/2;i++){
                    long long s = arr[i];
                    arr[i]=arr[idx+k-t];
                    arr[idx+k-t]=s;
                    t++;
                }
                idx+=k;
                n-=k;
            }
            
        }
        
    }

 
int main()
{

    

    
    return 0;
}