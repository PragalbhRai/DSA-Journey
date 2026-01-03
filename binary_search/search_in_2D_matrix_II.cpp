// search for element and return true or false in a matrix which is sorted rowise and columnwise
#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>&nums,int target){
    int low = 0 , high = nums[0].size()-1;
    while(low < nums.size() && high >= 0){
        if(nums[low][high] == target)
            return true;
        if(nums[low][high] > target)
            high--;
        else
            low++;
    }
    return false;
}
int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout<<search(matrix,5);
    return 0;
}