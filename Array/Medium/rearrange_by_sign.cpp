#include <bits/c++.h>
using namespace std;

bool cond(int i, int j, int k, int p_size, int n_size, int size)
{
    bool ans = (i < size) && (j < p_size || k < n_size);
    return ans;
}

vector<int> rearrangeArray(vector<int> &nums)           // Method 1
{
    vector<int> p_num;
    vector<int> n_num;
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        if (nums[i] >= 0)
            p_num.push_back(nums[i]);
        if (nums[i] < 0)
            n_num.push_back(nums[i]);
    }
    nums.clear();
    int p_size = p_num.size();
    int n_size = n_num.size();
    int i = 0, j = 0, k = 0;

    for (; cond(i, j, k, p_size, n_size, size); i++)
    {

        if (i % 2 == 0 && j < p_size)
        {
            nums.push_back(p_num[j]);
            j++;
        }
        if (i % 2 != 0 && k < n_size)
        {
            nums.push_back(n_num[k]);
            k++;
        }
    }
    return nums;
}

vector<int> rearrangeArray_M2(vector<int>& nums) {              //Method 2

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> ans_nums(nums.size());
        int n = 1, p = 0;

        for (auto num: nums )
        {

            if ( num>0 ){
                ans_nums.at(p) = num;
                p+=2;
            }
            if (num<0){
                ans_nums.at(n) = num;
                n+=2;
            }
        }
        return ans_nums;

    }

int main()
{

    return 0;
}