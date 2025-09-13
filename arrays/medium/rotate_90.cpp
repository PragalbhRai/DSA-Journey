// Rotate the matrix by 90 degrees
#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector <int>> &v){
    int n = v.size();
    for(int i = 0 ; i < n ;i++){
        for(int j = i+1 ; j < n ;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i = 0 ; i < n ;i++){
        reverse(v[i].begin(), v[i].end());
    }
}
int main(){
    vector<vector <int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    int n = v.size();
    rotate(v);
    for(int i = 0 ; i < v.size(); i++){
        for(int j = 0 ; j < v[0].size();j++){
            cout<<v[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}