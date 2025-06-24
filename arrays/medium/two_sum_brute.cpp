#include<bits/stdc++.h>
using namespace std;
bool istwosum(vector<int> v, int n, int k){
    int sum;
    for(int i = 0 ; i < n ; i++){
        sum = v[i];
        for(int j = 0; j < n ; j++){
            sum += v[j];
            if(sum == k)
                return true;
            else
                sum -= v[i];
        }
    }
    return false;
}
int main(){
    vector<int> v = {5,2,3,4,6,8};
    int n = v.size();
    int k = 14;
    if(istwosum(v,n,k)){
        cout<<"It is present";
    }
    else
        cout<<"It is not present";
    return 0;
}