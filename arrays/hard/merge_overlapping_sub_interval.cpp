// merge all the overlapping intervals and return all the new intervals formed for a given array
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> overlapping(vector<vector<int>> &nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i = 0 ; i < n;i++){
        if(ans.empty() || nums[i][0] > ans.back()[1])
            ans.push_back(nums[i]);
        else
            ans.back()[1] = max(ans.back()[1] , nums[i][1]);
    }
    return ans;
}
int main(){
    vector<vector<int>> check = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = overlapping(check);
    for (auto& vec : ans) {
    for (auto& element : vec) {
        cout << element << " "; 
    }
    cout << endl;
}
    return 0;
}