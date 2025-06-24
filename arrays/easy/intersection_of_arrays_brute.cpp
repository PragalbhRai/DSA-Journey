#include<bits/stdc++.h>
using namespace std;
vector<int> in(vector<int> a, vector<int>b , int n1, int n2){
    vector<int> ans;
    int vis[n2] = {0};
    for(int i = 0 ; i < n1; i++){
        for(int j = 0 ; j < n2 ; j++){
            if(a[i] == b[j] && vis[j] == 0){
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j] > a[i])
                break;
        }
    }
    return ans;
}
int main(){
    vector<int> a = {1,2,3,2};
    vector<int> b = {1,2,2,3,4,5,6};
    int n1 = a.size();
    int n2 = b.size();
    vector<int> ans = in(a,b,n1,n2);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}