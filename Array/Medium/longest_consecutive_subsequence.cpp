
#include <bits/stdc++.h>
using namespace std;

 int longestConsecutive(vector<int>& nums) {
        
         
      int n = nums.size();
      sort(nums.begin() , nums.end());
      if(n==0) return 0;
      if(n==1)  return 1;
      int l=1;
      int maxi=1;
      for(int i=0; i<n ; i++)
      {
          if(nums[i] == nums[i+1] -1) l++;
          else if(nums[i] == nums[i+1])   continue;
          else {
              l=1;
          }
          maxi = max(l,maxi);
      }
      return maxi;
    }

int longestConsecutive(int arr[] , int n) {
    if(n==1)  return 1;
      if(n==0)  return 0;
      
      sort(arr, arr+n);
      
      int l = 1;
      int maxi=1;
      for(int i=0; i<n-1 ; i++)
      {
          
          if(arr[i] == arr[i+1] -1) l++;
          else if(arr[i] == arr[i+1])   continue;
          else l=1;
          
          maxi = max(l,maxi);
      }
      return maxi;

}
int main()
{
   
    vector<int> a = {};
    int l =longestConsecutive(a);

    cout<<"\n"<<l << endl;
}
