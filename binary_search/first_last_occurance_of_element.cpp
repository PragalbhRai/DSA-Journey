// find and return the first and last occurance of an element in a sorted arry
#include<bits/stdc++.h>
using namespace std;
vector<int> first_last(vector<int> nums, int target){
    int first = -1 , last = -1;
    int low = 0 ;
    int high = nums.size()-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] >= target){
            first = mid;
            high = mid-1;
        }
        else    
            low = mid+1;
    }
    low = 0 , high = nums.size()-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] > target){
            last = mid;
            high = mid-1;
        }
        else    
            low = mid+1;
    }
    return {first,last-1};

}
int main(){
    vector<int> nums = {1,2,2,2,3,3,4,5,6,7};
    int n = nums.size();
    vector<int> ans = first_last(nums,2);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
// for a questioon in which we have to find the occurance of a 
// given value we can use this method there as well just we need to return(last-first)+1