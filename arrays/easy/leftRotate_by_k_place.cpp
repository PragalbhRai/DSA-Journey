#include<bits/stdc++.h>
using namespace std;
void left_rotate(vector<int> &v,int n, int k){
    k = k % n;
    vector<int> temp;
    for(int i = 0 ; i < k; i++){
        temp.push_back(v[i]);
    }
    for(int i = k; i < n;i++){
        v[i-k] = v[i];
    }
    for(int i = n-k; i < n; i++){
        v[i] = temp[i-(n-k)];
    }
}
int main(){
    vector<int> v = {1,2,3,4,5};
    int k;
    cout<<"Enter k: ";
    cin>>k;
    left_rotate(v,v.size(),k);
    for(auto it:v){
        cout<<it<<" ";
        it++;
    }
    return 0;
}