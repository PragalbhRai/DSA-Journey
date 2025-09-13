// return the maximum subarray sum for a given array
// optimal approach
// kadane's algorithm
#include<bits/stdc++.h>
using namespace std;
int get_maximum(vector<int> v, int n){
    int maxi = INT_MIN , sum = 0;
    for(int i = 0 ; i < n ;i++){
        sum += v[i];
        if(sum > maxi)
            maxi = sum;
        if(sum < 0)
            sum = 0;
    }
    if(maxi < 0)
        return 0;
    return maxi;
}
int main(){
    vector<int> v = {-2,-3,4,-1,-2,1,5,-3};
    int n = v.size();
    cout<<"The maximum sub array sum is: "<<get_maximum(v,n);
    return 0;
}