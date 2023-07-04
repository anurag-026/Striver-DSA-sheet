#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    int n = 13;
    bool arr[n + 1] = {0};
    int i=1;

    for(i=1; i<n+1; i++){
        arr[i]=1;
    }


    for(int i=2; i<n+1; i++){
        for(int j=i; j<n+1; j=j+i){
            arr[j] = (arr[j] == 0) ? 1 : 0;
        }
    }

    int count=0;
    for (bool i : arr){
        cout<<i<<" ";
       if(i) count++;
    }
    cout<<"\n"<<count;

    return 0;
}


//Alternate Way T.C. =O(logn)
int main(){
    int n=13;
    int count = sqrt(n); 
    cout<<count;
}
*/
//write it in O(n) T.C.

//T.C. = O(n)
int main()
{
    int n = 18;
    bool arr[n + 1] ={0} ;


    for(int i=1; i<n+1;i++){

        if(i*i <n+1){ 
            arr[i*i] =1;
        }
    }


    int count_1=0;
    for (int i=0;i<n+1;i++){
       // cout<<i<<": "<<arr[i]<<"  ";
       if(arr[i]) count_1++;
    }
    cout<<count_1;

    return 0;
}
