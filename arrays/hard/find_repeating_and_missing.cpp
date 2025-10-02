// in an given array of elements which should be from 1-n find the missing and repeating element
#include<bits/stdc++.h>
using namespace std;
vector<int> find_elements(vector<int> &nums){
    long long n = nums.size();
    long long Sn = (n*(n+1))/2;
    long long Sn2 = ((n*(n+1)*(2*n+2)))/6;
    long long S1 = 0 , S2 = 0;
    for(int i = 0 ; i < n ; i++){
        S1 += nums[i];
        S2 += (nums[i]*nums[i]);
    }
    int val1 = S1-Sn;
    int val2 = S2 - Sn2;
    val2 = val2/val1;
    long long x = (val1+val2)/2;
    long long y = x-val1;
    return {(int)x,(int)y};

}
int main(){
    vector<int> nums = {4,6,3,2,1,1};
    vector<int> ans = find_elements(nums);
    for(auto it : ans){
        cout<<it<<" ";
    }
}