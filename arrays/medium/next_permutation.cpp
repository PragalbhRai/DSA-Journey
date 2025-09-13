// give the next permutation of the array. Each permutation should be in a sorted format
#include<bits/stdc++.h>
using namespace std;
vector<int> permutation(vector<int> &v ,int n){
    int index =-1;
    for(int i = n-2; i >= 0 ; i--){
        if(v[i] < v[i+1]){
            index = i;
            break ;
        }
    }
    if(index == -1){
        reverse(v.begin(), v.end());
        return v;
    }
    for(int i = n-1 ; i >= index ; i--){
        if(v[i] > v[index]){
            swap(v[i] , v[index]);
            break;
        }
    }
    reverse(v.begin() + index+1 , v.end());
    return v;
}
int main(){
    vector<int> v = {1,2,3};
    int n = v.size();
    permutation(v,n);
     for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}