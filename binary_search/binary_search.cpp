// Implementation of binary search

#include<bits/stdc++.h>
using namespace std;


//********Loop*********



// int bs(vector<int> &nums, int target){
//     int low = 0;
//     int high = nums.size()-1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(nums[mid] == target)
//             return mid;
//         else if(nums[mid] < target)
//             low = mid+1;
//         else
//             high = mid -1;
//     }
//     return -1;
// }
// int main(){
//     vector<int> nums = {1,2,3,4,5,6,7};
//     int n = nums.size();
//     int idx = bs(nums, 2);
//     cout<<idx;
//     return 0;
// }




// ******Recurrsion********


int bs(vector<int>nums, int low , int high, int target){
    if(low > high)
        return -1;
    int mid = (low+high)/2;
    if(nums[mid] == target)
        return mid;
    else if(nums[mid] > target)
        return bs(nums,low , mid-1,target);
    else  
        return bs(nums,mid+1,high,target);
}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int n = nums.size();
    int idx = bs(nums,0,n-1, 2);
    cout<<idx;
    return 0;
}