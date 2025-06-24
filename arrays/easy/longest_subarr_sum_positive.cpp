// optimal
#include<bits/stdc++.h>
using namespace std;
int longest(vector<int>v, int n ,long long k){
    int left = 0 ; 
    int right = 0;
    long long sum = 0;
    int maxLen = 0; 
    while(right < n){
        while(v[left] <= right && sum >k){
            sum -= v[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right-left +1);
        }
        right++;
        if(right < n)
            sum += v[right];
    }
    return maxLen;
}
int main(){
    vector<int> v = {1,2,3,1,1,1,2,3};
    int n = v.size();
    int k = 3;
    cout<<"Longest subarray is of size: "<<longest(v,n,k);
    return 0;
}