#include<bits/stdc++.h>
using namespace std;
int element(vector<int> v ,int N){
    int xor1 = 0 , xor2 = 0;
    int n = N-1;
    for(int i = 0 ; i < n ; i++){
        xor2 = xor2 ^ v[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}
int main(){
    vector<int> v = {1,2,4,5};
    int n = 5;
    cout<<"Missing element: "<<element(v,n)<<endl;
    return 0;
}