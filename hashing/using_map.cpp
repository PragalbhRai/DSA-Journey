#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i  = 0 ; i < n ; i ++){
        cin>>a[i];
    }
    map<long,long> m;
    for(int i = 0 ; i < n ; i ++){
        m[a[i]]++;
    }
    for(int i = 0 ; i < n ; i ++){
        cout<<m[a[i]]<<" ";
    }
    return 0;
}