// find the element which appears only once in a sorted array where every other element appear twice
#include <bits/stdc++.h>
using namespace std;
int element(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    if(n==1)
            return nums[0];
        if(nums[0] != nums[1])
            return nums[0];
        if(nums[n-1] != nums[n-2])
            return nums[n-1];
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1])
                return nums[mid];
            if(mid %2 == 0){
                if(nums[mid] == nums[mid+1])
                    low = mid+1;
                else
                    high = mid-1;
            }
            else{
                if(nums[mid] == nums[mid-1])
                    low = mid+1;
                else
                    high = mid-1;
            }
        }
        return -1;
}
int main()
{
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    int ans = element(nums);
    cout << ans << endl;
    return 0;
}