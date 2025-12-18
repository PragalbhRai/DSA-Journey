// return the minimum number of days required to make m bouquets where k is the number of adjacent flowers
#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int>&nums, int maxi,int m,int k){
        int cnt = 0 , bloom = 0;
        for(int it : nums){
            if(maxi >= it)
                cnt++;
            else{
                bloom += (cnt/k);
                cnt =0;
            }
        }
        bloom += (cnt/k);
        if(bloom >= m)
            return true;
        return false;
    }
    int minDays(vector<int>& nums, int m, int k) {
        long long maxi = nums[0];
        long long low = 1;
        long long n = nums.size();
        if((long long)m*k > n)
            return -1;
        for(auto it:nums)
            if(it>maxi)
                maxi = it;
        long long high = maxi;
        while(low<=high){
            long long mid = (low+high)/2;
            if(possible(nums,mid,m,k)){
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return low;
    }
int main()
{
    vector<int> nums = {1,10,3,10,2};
    int ans  = minDays(nums,3,1);
    cout<<ans<<endl;
    return 0;
}