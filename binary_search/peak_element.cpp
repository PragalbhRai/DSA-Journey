// find the peak element(for a[i] to be peak it should satisfy the condition: a[i-1]<a[i]>a[i+1])
// assuming that the left and right of array is -infinity
#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 1 , high = n-2;
        if(n == 1)
            return 0;
        if(nums[0] > nums[1])
            return 0;
        if(nums[n-1] > nums[n-2])
            return n-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid]>nums[mid+1] && nums[mid] > nums[mid-1])
                return mid;
            if(nums[mid] > nums[mid-1])
                low = mid+1;
            else if(nums[mid] < nums[mid-1])
                high = mid-1;
        }
        return -1;
    }
int main(){
    vector<int> nums = {1,2,1,3,5,6,4};
    int ans = findPeakElement(nums);
    cout<<ans;
    return 0;
}