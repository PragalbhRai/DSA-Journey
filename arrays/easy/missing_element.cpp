#include<bits/stdc++.h>
using namespace std;
int element(vector<int> v ,int n){
    int sum = (n*(n+1))/2;
    int sum2 = 0;
    for(int i = 0 ; i < n-1; i++){
        sum2 += v[i];
    }
    return sum-sum2;
}
int main(){
    vector<int> v = {1,2,4,5};
    int n = 5;
    cout<<"Missing element: "<<element(v,n)<<endl;
    return 0;
}