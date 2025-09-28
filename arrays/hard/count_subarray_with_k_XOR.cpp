// for a given array return the number of subarrays whose XOR is equal to k
#include<bits/stdc++.h>
using namespace std;
int majorityXOR(vector<int> nums,int k){
    int n = nums.size();
    int xr = 0 , cnt =0;
    map<int,int> mpp;
    mpp[xr]++;
    for(int i = 0 ; i < n ;i++){
        xr = xr^nums[i];
        int x = xr^k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
int main(){
    vector<int> check = {4,2,2,6,4};
    int ans = majorityXOR(check, 6);
    cout<<ans<<endl;    
    return 0;
}