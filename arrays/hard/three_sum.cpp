// for a given array of elements return all the triplets which add upto zero
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i = 0 ; i < n ;i++){
        if(i > 0 && nums[i] == nums[i-1])continue;
        int j = i+1 , k = n-1;
        while(j < k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum < 0)j++;
            else if(sum > 0)k--;
            else{
                vector<int> temp = {nums[i] , nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && nums[j] == nums[j-1])j++;
                while(j < k && nums[k] == nums[k+1])k--;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> check = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    vector<vector<int>> ans = triplet(check);
    for (auto& vec : ans) {
    for (auto& element : vec) {
        cout << element << " "; 
    }
    cout << endl;
}
    return 0;
}