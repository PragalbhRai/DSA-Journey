#include<bits/stdc++.h>
using namespace std;
int name(int n){
    if(n==0)
        return 0;
    cout<<"Pragalbh"<<endl;
    return name(n-1);
}
int main(){
    int n;
    cout<<"Enter the number of times you want to print the name: "<<endl;
    cin>>n;
    name(n);
    return 0;
}