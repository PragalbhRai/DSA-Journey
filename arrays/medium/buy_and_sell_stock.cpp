// select the days on which you can get max profit using one transaction
#include<bits/stdc++.h>
using namespace std;
int max_profit(vector<int> v ,int n){
    int mini = v[0];
    int maxProfit = 0;
    for(int i = 0 ; i < n ;i++){
        int cost = v[i] - mini;
        maxProfit = max(maxProfit,cost);
        mini = min(mini,v[i]);
    }
    return maxProfit;
}
int main(){
    vector<int> v = {7,1,2,3,5,6,4};
    int n = v.size();
    cout<<"The maximum prfit we can get is: "<<max_profit(v,n);
    return 0;
}