#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int hash[26] = {0};
    int n = s.size();
    for(int i = 0 ; i < n; i++){
        hash[(s[i]-97)] += 1;
    }
    cout<<"Frequency: "<<endl;
    for(int i = 0 ; i < 26;i++){
        if(hash[i] == 0)
            continue;
        else
            cout<<(char)(i+97)<<" "<<hash[i]<<endl;
    }
    return 0;
}