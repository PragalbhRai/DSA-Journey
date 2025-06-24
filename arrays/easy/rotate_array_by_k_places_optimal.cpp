#include<bits/stdc++.h>
using namespace std;
void left_rotate(vector<int> &v , int n,int k){
    k = k % n;
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k+1,v.end());
    reverse(v.begin(), v.end());
}
int main(){
    vector<int> v = {1,2,3,4,5};
    int n= v.size();
    int k;
    cout<<"Enter k: ";
    cin>>k;
    left_rotate(v,n,k);
    for(auto it:v){
        cout<<it<<" ";
        it++;
    }
    return 0;
}