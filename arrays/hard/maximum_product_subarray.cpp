// return the maximum product a subarray can form in the given array
#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &nums){
    int maxi = INT_MIN , pre = 1 , suff  = 1;
    for(int i = 0 ;i < nums.size() ; i++){
        if(pre == 0 )pre =1;
        if(suff == 0 )suff =1;
        pre = pre*nums[i];
        suff = suff*nums[nums.size()-i-1];
        maxi = max(maxi,max(pre,suff));
    }
    return maxi;
}
int main(){
    vector<int> nums = {2,3,-2,4};
    cout<<maxProduct(nums);
    return 0;
}