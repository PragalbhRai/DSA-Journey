// return the total number of subarrays with the sum equal to k for a given array
#include<bits/stdc++.h>
using namespace std;
int get_number(vector<int> v, int n,int k){
    map<int,int> mpp;
    mpp[0] = 1;
    int presum = 0 , cnt = 0;
    for(int i = 0 ; i < n ; i++){
        presum += v[i];
        int remove = presum-k;
        cnt += mpp[remove];
        mpp[presum] += 1;
    }
    return cnt;
}
int main(){
    vector<int> v = {1,1,1};
    int n = v.size();
    int k = 2;
    cout<<"The number of sub array is: "<<get_number(v,n,k);
    return 0;
}