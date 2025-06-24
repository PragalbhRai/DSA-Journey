#include<bits/stdc++.h>
using namespace std;
int check_element(vector<int>v , int n){
    int count =0 , res;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(v[j] == v[i])
                count++;
            else
                continue;
        }
        if(count == 1){
            res = i;
            break;
        }
        else
            count =0;
    }
    return v[res];
}
int main(){
    vector<int> v = {1,1,2,2,3,4,4,5,5};
    int n= v.size();
    cout<<"The element which appers once is: "<<check_element(v,n);
    return 0;
}