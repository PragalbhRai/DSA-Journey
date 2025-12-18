// return the smallest divisor such that adding the ceil of each element divided by the divisor is less than or equal to the threshold
#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int> &nums,int mid, int threshold){
        int sum = 0;
        for(auto it:nums){
            sum += (it+mid-1)/mid;
        }
        if(sum <= threshold)
            return true;
        else
            return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int mini = nums[0] , maxi = nums[0];
        int n = nums.size();
        if(threshold < n || threshold > pow(10,6))
            return -1;
        for(auto it : nums){
            maxi = max(maxi,it);
        }
        int low = 1, high = maxi;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(nums,mid,threshold))
                high = mid-1;
            else
                low = mid+1;
        }
        return low;
    }
int main()
{
    vector<int> nums = {1,2,5,9};
    int ans  = smallestDivisor(nums,6);
    cout<<ans<<endl;
    return 0;
}