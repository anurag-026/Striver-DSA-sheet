#include <iostream>
#include <vector>
using namespace std;

int search1(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        // right
        if (nums[mid] < nums[high])
        {
            if (nums[mid] <= target && nums[high] >= target)
            {                                                       //4, 5, 6, 7, 0, 1, 2
                low = mid+1 ;
            }
            else
            {
                high = mid-1;
            }
        }
        // left
        if (nums[mid] > nums[low])
        {
            if (nums[low] <= target && nums[mid] >= target)
            {
                high = mid-1;
            }
            else
            {
                low = mid +1;
            }
        }
    }
    return -1;
}

int search2(vector<int>& nums, int target) {

        int low = 0, high = nums.size() - 1, mid = 0;
        int n = nums.size() - 1;

        while (low <= high) {
            mid = (low + high) / 2;
            if (target == nums[mid]) {
                return mid;
            }
            if (nums[mid] > nums[n]) {
                if (target > nums[mid] || target < nums[0]) {   //{4, 5, 6, 7, 0, 1, 2};
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }  
            else {
                if (target < nums[mid] || target > nums[n]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }

        return -1;
    }

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 3;
    cout << search1(nums, target);
}