#include <bits/stdc++.h>
using namespace std;

int
 sum(int n){
    static int  sum=0;

    if(n=0)
        return sum;
    sum+=n;
    sum(n--);

}

int main(){

    cout<<sum(10)<<endl;


    return 0;
}