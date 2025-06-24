#include<bits/stdc++.h>
using namespace std;
string istwosum(vector<int> v, int n, int k){
    map<int,int> mpp;
    for(int i = 0 ; i < n ; i++){
        int a = v[i];
        int rem = k-a;
        if(mpp.find(rem) != mpp.end())
            return "Yes";
        else    
            mpp[a] = i;
    }
    return "NO";
}
int main(){
    vector<int> v = {5,2,3,4,6,8};
    int n = v.size();
    int k = 14;
    cout<<istwosum(v,n,k);
    return 0;
}