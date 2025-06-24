#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> v, int n){
    int largest = v[0];
    int slargest = -1;
    for(int i = 0 ; i < n ; i++){
        if(v[i] > largest){
            slargest = largest;
            largest = v[i];
        }
        if(v[i] < largest && v[i] > slargest){
            slargest = v[i];
        }
    }
    return slargest;
}
int main(){
    vector<int> v = {2,6,3,1,6,5};
    int n = v.size();
    cout<<secondLargest(v,n);
    return 0;
}