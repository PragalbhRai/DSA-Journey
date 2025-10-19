// find and return the first and last occurance of an element in a sorted arry
#include <bits/stdc++.h>
using namespace std;

vector<int> first_last(const vector<int>& nums, int target) {
    int first = -1, last = -1;
    
    // Find first occurrence (lower bound)
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] >= target) {
            first = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    if (first == -1 || nums[first] != target) {
        return {-1, -1}; // target not found
    }

    // Find last occurrence (upper bound - 1)
    low = 0;
    high = nums.size() - 1;
    int upper = nums.size(); // For upper bound default when no greater element exists
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] > target) {
            upper = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    last = upper - 1;
    
    return {first, last};
}

int main() {
    vector<int> nums = {1, 2, 2, 2, 3, 3, 4, 5, 6, 7};
    vector<int> ans = first_last(nums, 2);
    cout << ans[0] << " " << ans[1];
    return 0;
}
// for a questioon in which we have to find the occurance of a 
// given value we can use this method there as well just we need to return(last-first)+1