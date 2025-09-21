// return the numbers which appear more than n/3 times in an array
// there can be at max 2 elements
#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int el1 , el2 , cnt1 = 0 , cnt2 = 0;
        for(int i = 0 ; i < n ;i++){
            if(cnt1 == 0 && nums[i] != el2){
                cnt1 = 1;
                el1 = nums[i];
            }
            else if((cnt2 == 0 && nums[i] != el1)){
                cnt2 = 1;
                el2 = nums[i];
            }
            else if(nums[i] == el1)
                cnt1++;
            else if(nums[i] == el2)
                cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0 , cnt2 =0;
        int mini = (int)(n/3)+1;
        for(int i = 0 ;i < n ;i++){
            if(nums[i] == el1)
                cnt1++;
            if(nums[i] == el2)
                cnt2++;
        }
        vector<int> ans;
        if(cnt1 >= mini)
            ans.push_back(el1);
        if(cnt2 >= mini)
            ans.push_back(el2);
        sort(ans.begin(),ans.end());
        return ans;
}
int main(){
    vector<int> check = {1,1,1,3,3,2,2,2};
    vector<int> ans = majorityElement(check);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}