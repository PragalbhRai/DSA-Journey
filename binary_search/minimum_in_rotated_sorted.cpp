// find the minimum element in a sorted rotated array
#include <bits/stdc++.h>
using namespace std;
int minimum(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(nums[low]<=nums[high])
            ans = min(ans,nums[low]);
        if (nums[low] <= nums[mid])
        {
           ans = min(ans,nums[low]);
           low = mid+1;
        }
        else if(nums[mid] <= nums[high]){
            ans = min(nums[mid],ans);
            high = mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int ans = minimum(nums);
    cout << ans << endl;
    return 0;
}
// to find how many times the array has been rotated we just need to give the index of minimum in the array