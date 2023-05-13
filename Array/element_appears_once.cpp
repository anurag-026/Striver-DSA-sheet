#include <bits/stdc++.h>
using namespace std;

int search(vector<int> nums)
{
    int res = 0;

    for (auto elem : nums)
    {
        res ^= elem;
    }

    return res;
}

int main()
{
    int len, input;

    cin >> len;
    vector<int> nums;
    for (int i = 0; i < len; i++)
    {
        cin >> input;
        nums.push_back(input);
    }
    cout << search(nums) << '\n';

    return 0;
}