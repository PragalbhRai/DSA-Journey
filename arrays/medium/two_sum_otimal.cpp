#include<bits/stdc++.h>
using namespace std;
string istwosum(vector<int> v, int n, int k){
    sort(v.begin(),v.end());
    int i = 0 , j = n-1;
    while(i<j){
        int sum = v[i]+v[j];
        if(sum == k)
            return "YES";
        else if(sum > k){
            j--;
        }
        else{
            i++;
        }
    }
    return "NO";
}
int main(){
    vector<int> v = {5,2,3,4,6,8};
    int n = v.size();
    int k = 14;
    cout<<istwosum(v,n,k);
    return 0;
}