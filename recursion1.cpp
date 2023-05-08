#include <bits/stdc++.h> 
using namespace std; 
 
 static long sum=0;

 long long sumOfSeries(long long N) {
        // code here
        static long sum=0;
        
        if(N!=0){
            sum= sum+ N*N*N;
            sumOfSeries(N-1);
        }
        
        return sum;
    }
 
int main()
{
    cout<<sumOfSeries(7);
    
    return 0;
}