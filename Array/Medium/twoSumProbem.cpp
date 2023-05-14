#include <bits/stdc++.h>
using namespace std;
//Count pairs with given sum
int Pair_Sum(int arr[], int size, int sum){
   int count = 0;
   for (int i=0; i<size; i++){
      for (int j=i+1; j<size; j++){
         int total = arr[i] + arr[j];
         if (total == sum){
            count++;
         }
      }
   }
   return count;
}
int main(){
   int arr[] = {2, 6, 1, 7, 9, 8} ;
   int sum = 9;
   int size = sizeof(arr)/sizeof(arr[0]);
   cout<<"Count of pairs with given sum "<<sum<<" is: "<<Pair_Sum(arr, size, sum);
   return 0;
}