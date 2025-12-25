// we have 1 ship and N products. Each product has a weight and we have to D days.
// The ship will run once per day and we have to make sure all products are shipped within D days
// We have to find out what is the least amount of weight that we load into the ship
#include<bits/stdc++.h>
using namespace std;
bool possible(int mid,vector<int> &nums,int days){
        int load = 0;
        int day =1;
        for(auto it : nums){
            if(load + it > mid){
                day += 1;
                load = it;
            }
            else
                load += it;
        }
        if(day <= days)
            return true;
        else
            return false;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int maxi = nums[0];
        int sum = 0;
        for(auto it : nums){
            maxi = max(maxi,it);
            sum += it;
        }
        int low = maxi;
        int high = sum;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(mid,nums,days))
                high = mid-1;
            else
                low = mid+1;
        }
        return low;
    }
int main(){
    vector<int> wieghts = {1,2,3,4,5,6,7,8,9,10};
    int ans = shipWithinDays(wieghts,5);
    cout<<ans;
    return 0;
} 