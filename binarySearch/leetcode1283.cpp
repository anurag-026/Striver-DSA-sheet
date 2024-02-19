#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> &nums, int mid, int size)
{
    int countsum = 0;
    for (int i = 0; i < size; i++)
    {
        countsum += ceil((double)nums[i] / (double)mid);
    }
    return countsum;
}
int smallestDivisor(vector<int> &nums, int threshold)
{

    int max = *max_element(nums.begin(), nums.end());
    int ans = max;
    int size = nums.size();
    if (size > threshold)
        return 0;
    else if (size == threshold)
        return max;
    long long arrSum = 0;
    for (int i = 0; i < size; i++)
    {
        arrSum += nums[i];
    }
    if (arrSum <= (long long)threshold)
        return 1;

    else
    {

        int low = 1, high = max;
        int mid = low;
        while (low <= high)
        {

            int count = sum(nums, mid, size);
            if (count <= threshold)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (count > threshold)
            {
                low = mid + 1;
            }
            mid = (low + high) / 2;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {2,3,5,7,11};
    int threshold = 11;

    cout << smallestDivisor(nums, threshold);
}