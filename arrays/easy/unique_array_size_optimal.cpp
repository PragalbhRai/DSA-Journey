#include<bits/stdc++.h>
using namespace std;
int size(vector<int> v , int n){
    int i = 0;
    for(int j = 1; j<n ; j++){
        if(v[j] != v[i]){
            v[i+1] = v[j];
            i++;
        }
    }
    return (i+1);
}
int main(){
    vector<int> v = {1,1,2,2,3,3,3};
    int n = v.size();
    cout<<"Unique array size: "<<size(v,n);
}