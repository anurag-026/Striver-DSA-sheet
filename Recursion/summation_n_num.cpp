#include <bits/stdc++.h>
using namespace std;

// Summation of 1st n numbers
int summation(int n){
   static int sum=0;
   if(n==0)  return sum;
   sum +=n;
   return summation(n-1);
}


int main()
{
   cout<<summation(5);

   return 0;
}