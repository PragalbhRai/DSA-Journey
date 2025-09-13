// Rearrange the array elements in + - + - order for equal number of positive and negative
#include<bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int> v ,int n){
    vector<int> res(n,0);
    int pos = 0 , neg = 0;
    for(int i = 0 ; i < n ; i++){
        if(v[i] > 0){
            res[pos*2] = v[i];
            pos++;
        }
        else if(v[i] < 0){
            res[neg*2 +1] = v[i];
            neg++;
        }
    }
    return res;
}
int main(){
    vector<int> v = {-2,1,3,-5,6,-7};
    int n = v.size();
    vector<int> ans = rearrange(v,n);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}