#include<bits/stdc++.h>
using namespace std;
int check_element(vector<int>v , int n){
    int xorr = 0;
    for(int i = 0 ; i < n ; i++){
        xorr = xorr ^ v[i];
    }
    return xorr;
}
int main(){
    vector<int> v = {1,1,2,2,3,4,4,5,5};
    int n= v.size();
    cout<<"The element which appers once is: "<<check_element(v,n);
    return 0;
}