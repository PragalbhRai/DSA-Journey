// Dutch National Flag Algorithm
#include<bits/stdc++.h>
using namespace std;
void sort(vector<int> &v, int n){
    int low= 0, mid = 0 , high = n-1;
    while(mid <= high){
        if(v[mid] == 0){
            swap(v[low], v[mid]);
            mid++;
            low++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else{
            swap(v[mid] , v[high]);
            high--;
        }
    }
}
int main(){
    vector<int> v = {0,1,0,1,1,0,2,1,0};
    int n = v.size();
    sort(v,n);
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}