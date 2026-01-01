#include<bits/stdc++.h>
using namespace std;

long double noOfGasSt(vector<int>& nums, long double dist) {
    int cnt = 0;
    int n = nums.size();

    for(int i = 1; i < n; i++) {
        long double gap = nums[i] - nums[i - 1];
        cnt += (int)(gap / dist);
    }
    return cnt;
}

long double minimiseMaxDist(vector<int>& nums, int k) {
    int n = nums.size();
    long double low = 0, high = 0;

    for(int i = 0; i < n - 1; i++) {
        high = max(high, (long double)(nums[i + 1] - nums[i]));
    }

    long double diff = 1e-6;

    while(high - low > diff) {
        long double mid = (low + high) / 2.0;
        long double cnt = noOfGasSt(nums, mid);

        if(cnt > k)
            low = mid;
        else
            high = mid;
    }
    return high;
}

int main() {
    vector<int> nums = {1,13,17,23};
    long double ans = minimiseMaxDist(nums, 5);
    cout << ans;
}
