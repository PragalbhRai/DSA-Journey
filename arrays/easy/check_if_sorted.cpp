#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> v,int n){
    for(int i = 1 ; i < n ; i++){
        if(v[i] >= v[i-1]){

        }
        else
            return false;
    }
    return true;
}
int main(){
    vector<int> v = {1,2,3,4,5};
    int n = v.size();
    cout<<check(v,n);
    return 0;
}