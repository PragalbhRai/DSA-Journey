// return the number of leaders in an array
// a leader is an element which is greater than all of its next  elements
#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int> &v ,int n){
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i = n-1; i >= 0 ;i--){
        if(v[i] > maxi){
            ans.push_back(v[i]);
        }
        maxi = max(maxi,v[i]);
    }
    return ans;
}
int main(){
    vector<int> v = {10,22,12,3,0,6};
    int n = v.size();
    vector<int> ans = leaders(v,n);
     for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}