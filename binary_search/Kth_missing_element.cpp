// give an array of positive integers in increasing order return the kth missing element starting from 1
#include<bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int>& nums, int k) {
        if(k<nums[0])
            return k;
        int n = nums.size();
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            int missing = nums[mid] -(mid+1);
            if(missing < k)
                low = mid+1;
            else
                high = mid-1;
        }
        return low+k;
    }
int main(){
    vector<int> nums = {2,3,4,7,11};
    int ans = findKthPositive(nums,5);
    cout<<ans;
    return 0;
}