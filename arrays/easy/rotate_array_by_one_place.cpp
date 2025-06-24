#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    int n= v.size();
    int temp = v[0];
    for(int i = 1 ; i < n ; i++){
        v[i-1] = v[i];
    }
    v[n-1] = temp;
    for(auto it:v){
        cout<<it<<" ";
        it++;
    }
    return 0;
}