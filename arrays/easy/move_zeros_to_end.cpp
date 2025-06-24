#include<bits/stdc++.h>
using namespace std;
void zeros_toEnd(vector<int> &v, int n){
    int j = -1;
    for(int i = 0 ; i < n ;i++){
        if(v[i] == 0){
            j = i;
            break;
        }
    }
    for(int i = j+1 ; i < n ; i++){
        if(v[i] != 0){
            swap(v[j],v[i]);
            j++;
        }
    }
}
int main(){
    vector<int> v = {1,0,9,60,0,4,0,5};
    int n= v.size();
    zeros_toEnd(v,n);
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}