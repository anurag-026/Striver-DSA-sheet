#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int n = nums.size();
    int start = -1, end = -1;
    for (int i = 0, j = n - 1; i <n && j>=0 ; i++, j--)
    {

        if (target == nums[i] && start == -1)
        {
            start = i;
        }
        if (target == nums[j] && end == -1)
        {
            end = j;
        }
        if(start != -1 && end != -1){
            break;
        }
    }
    vector<int> ans = {start, end};
    return ans;
}

int main(){
    vector<int>  nums= {5,7,7,8,8,10};
    vector<int> ans= searchRange(nums, 8);
    cout<<"{";
    for(int i=0; i<2; i++){
        cout<< ans[i] << " ";
    }
    cout<<"}";
}