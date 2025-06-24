#include<bits/stdc++.h>
using namespace std;
vector<int> in(vector<int> a, vector<int>b , int n1, int n2){
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i < n1 && j <n2){
        if(a[i] > b[j]){
            i++;
        }
        else if(b[j] > a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int> a = {1,2,2,3};
    vector<int> b = {1,2,2,3,4,5,6};
    int n1 = a.size();
    int n2 = b.size();
    vector<int> ans = in(a,b,n1,n2);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}