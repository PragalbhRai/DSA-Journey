// find the element which occurs more than n/2 times
#include<bits/stdc++.h>
using namespace std;
int find_element(vector<int> v , int n){
    map<int,int> mp;
    for(int i = 0 ; i < n ; i ++){
        mp[v[i]]++;
    }
    int maxVal = INT_MIN;
    int maxKey = -1;

    for (auto it : mp) {
        if (it.second > n/2) {
            return it.first;
        }
    }
    return -1;
}
int main(){
    vector<int> v = {2,2,3,4,2,2,1,2};
    int n = v.size();
    cout<<"The maximum occuring element is: "<<find_element(v,n);
    return 0;
}