// given an array containing number of stalls and an integer representing the number of cows return the maximum of the minimum distance between the cows
#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int>&nums,int dist,int m){
        int n = nums.size();
        int cnt = 1;
        int last = nums[0];
        for(int i = 1 ; i < n ;i++){
            if(nums[i]-last >= dist){
                cnt++;
                last = nums[i];
            }
        }
        if(cnt >= m)
            return true;
        else
            return false;
    }
    int maxDistance(vector<int>& nums, int m) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long long high = nums[n-1]-nums[0];
        long long low = 1;
        while(low<=high){
            long long mid = (low+high)/2;
            if(possible(nums,mid,m))
                low = mid+1;
            else
                high = mid-1;
        }
        return high;
    }
    int main(){
        vector<int> nums = {1,2,3,4,7};
        int ans = maxDistance(nums,3);
        cout<<ans; 
        return 0;
    }