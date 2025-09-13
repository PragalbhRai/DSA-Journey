#include<bits/stdc++.h>
using namespace std;
void set_zero(vector<vector <int>> &v){
    int n = v.size();
    int m = v[0].size();
    int col0 = 1;
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < m ;j++){
            if(v[i][j] == 0){
                v[i][0] = 0;
                if(j != 0)
                    v[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for(int i = 1 ; i < n ;i++){
        for(int j = 1; j < m;j++){
            if(v[i][j] != 0){
                if(v[0][j] == 0|| v[i][0] == 0)
                    v[i][j] = 0;
            }
        }
    }
    if(v[0][0] == 0){
        for(int j = 0 ; j < m ; j++){
            v[0][j] = 0;
        }
    }
    if(col0 ==0){
        for(int i = 0 ; i < n ;i++){
            v[i][0] =0;
        }
    }
}
int main(){
    vector<vector <int>> v = {{1,1,1},{1,0,1},{1,1,1}};
    int n = v.size();
    set_zero(v);
    for(int i = 0 ; i < v.size(); i++){
        for(int j = 0 ; j < v[0].size();j++){
            cout<<v[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}