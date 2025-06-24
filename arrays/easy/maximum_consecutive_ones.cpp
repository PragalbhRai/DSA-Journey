#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,1,0,0,1,1,1,0,0,1,1};
    int n = v.size();
    int count = 0 , max = 0;
    for(int i = 0 ; i < n ; i++){
        if(v[i] == 1)
            count++;
        else if(count>max){
            max = count;
            count =0;
        }
        else
            count = 0;
    }
    cout<<max;
}