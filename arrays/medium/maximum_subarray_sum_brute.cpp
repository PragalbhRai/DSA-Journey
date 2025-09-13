// return the maximum subarray sum for a given array
// brute force approach
#include<bits/stdc++.h>
using namespace std;
int get_maximum(vector<int> v, int n){
    int maxi = INT_MIN;
    for(int i = 0 ; i < n ;i++){
        for(int j = i ; j < n ; j++){
            int sum =0;
            for(int k = i ; k < j ; k++){
                sum += v[k];
                maxi = max(maxi,sum);
            }
        }
    }
    return maxi;
}
int main(){
    vector<int> v = {-2,-3,4,-1,-2,1,5,-3};
    int n = v.size();
    cout<<"The maximum sub array sum is: "<<get_maximum(v,n);
    return 0;
}