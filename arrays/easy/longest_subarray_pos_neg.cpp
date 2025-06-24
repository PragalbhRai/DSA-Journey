// optimal
#include<bits/stdc++.h>
using namespace std;
int longest(vector<int>v, int n ,long long k){
    map<long long,int> preSumMap;
    int maxLen =0;
    long long sum =0;
    for(int i = 0 ; i < n ; i++){
        sum += v[i];
        if(sum == k){
            maxLen = max(maxLen , i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
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
