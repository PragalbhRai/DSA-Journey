// given an array containing int representing number of pages and k students
// allocate the books to students in a contiguos manner s.t. maximum allocated page is the minimum
#include<bits/stdc++.h>
using namespace std;
int noOfStud(vector<int> &nums,int limit,int k){
        int std = 1 , cnt = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ;i++){
            if(cnt+nums[i] <= limit)
                cnt += nums[i];
            else{
                std++;
                cnt = nums[i];
            }
        }
        return std;
    }
    int allocateBooks(vector<int>& nums, int k) {
        long long maxi = nums[0], sum = 0;
        for(auto it : nums){
            if(it > maxi)
                maxi = it;
            sum += it;
        }
        long long low = maxi , high = sum;
        while(low<=high){
            long long mid = (low+high)/2;
            if(noOfStud(nums,mid,k)>k)
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
    }
int main(){
    vector<int> nums = {7,2,5,10,8};
    int ans = allocateBooks(nums,2);
    cout<<ans;
    return 0;
}