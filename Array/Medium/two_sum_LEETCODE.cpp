/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include <bits/stdc++.h>
using namespace std;
// Method 1      Brute Force
vector<int> twoSum(vector<int> &nums, int target)
{
    int len_nums = nums.size();
    vector<int> finalIndex;

    for (int indexMain = 0; indexMain < len_nums; indexMain++)
    {
        for (int indexComp = indexMain + 1; indexComp < len_nums; indexComp++)
        {
            int sum = nums[indexMain] + nums[indexComp];
            if (sum == target)
            {
                finalIndex.push_back(indexMain);
                finalIndex.push_back(indexComp);
                return finalIndex;
            }
        }
    }
}

// Method 2      Hash Mapping
vector<int> twoSum_M2(vector<int> &a, int target)
{
    map<int, int> map;
    int len_a = a.size();
    for (int i = 0; i < len_a; i++)
    {
        if (map.find(a[i]) == map.end())
            map[target - a[i]] = i;
        else
            return {map[a[i]], i};
    }

    return {};
}


int main()
{
    vector<int> nums = {1, 2, 3, 4, 6};
    int target = 6;
    vector<int> ans = twoSum(nums, target);
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    return 0;
}