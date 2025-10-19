// implement lower bound and upper bound
// lower bound: smallest index such that arr[index] >= n
// eg: arr = {3,5,8,15,19} n = 5; lower bound = 2
// upper bound: 
#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>nums,int target){
    int low = 0;
    int high = nums.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid] >= target){
            ans = mid;
            high = mid-1;
        }
        else if(nums[mid] < target){
            high = mid-1;
        }
        else 
            low = mid+1;
    }
    return ans;
}
int upper_bound(vector<int>nums,int target){
    int low = 0;
    int high = nums.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid] > target){
            ans = mid;
            high = mid-1;
        }
        else if(nums[mid] < target){
            high = mid-1;
        }
        else 
            low = mid+1;
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,2,2,3,3,4,5,6,7};
    int n = nums.size();
    cout<<lower_bound(nums,2)<<endl<<upper_bound(nums,3);
    return 0;
}