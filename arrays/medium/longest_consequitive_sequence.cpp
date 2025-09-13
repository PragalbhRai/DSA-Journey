// to find the longest consequtive sequence in an array
#include<bits/stdc++.h>
using namespace std;
int sequence(vector<int> &v ,int n){
    int cnt =0 , longest = 0;
    unordered_set<int> st;
    for(auto it : v){
        st.insert(it);
    }
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                cnt ++;
                x++;
            }
            longest = max(longest,cnt);
        }
    }
    return longest;
}
int main(){
    vector<int> v = {1,1,1,1,2,2,2,3,3,4,100,100,101,101,102};
    int n = v.size();
    cout<<sequence(v,n);
    return 0;
}