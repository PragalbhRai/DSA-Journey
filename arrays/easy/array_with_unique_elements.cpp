#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,1,2,2,2,3,5,4};
    set<int> st;
    for(int i = 0 ; i < v.size(); i++){
        st.insert(v[i]);
    }
    for(auto it:st){
        cout<<it<<" ";
        it++;
    }
    return 0;
}