// return the count of pairs which satisfy the following condition in an array
// i < j && a[i] > a[j]
#include<bits/stdc++.h>
using namespace std;
int merge(vector<int> &nums , int low , int mid ,int high){
    int left = low;
    int right = mid+1;
    int cnt = 0;
    vector<int> temp;
    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            cnt += (mid-left)+1;
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i = low ; i <= high ; i++){
        nums[i] = temp[i-low];
    }
    return cnt;
}
int mergeSort(vector<int> &nums , int low ,int high){
    if(low >= high) return 0;
    int mid = (low+high)/2;
    int cnt = 0;
    cnt += mergeSort(nums,low,mid);
    cnt += mergeSort(nums,mid+1,high);
    cnt += merge(nums,low,mid,high);
    return cnt;
}
int main(){
    vector<int> nums = {5,3,2,4,1};
    cout<<"Inverson: "<<mergeSort(nums,0,nums.size()-1);
    return 0;
}