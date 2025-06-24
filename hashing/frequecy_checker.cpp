#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for(int i=0 ;i < n;i++){
        cin>>a[i];
    }
    int hash[13] = {0};
    for(int i =0; i < n ; i++){
        hash[a[i]] +=1;
    }
    int q;
    cout<<"Enter how many frequencies you want to check: ";
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<" ";
    }
    return 0;
}