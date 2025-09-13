// Print the elements of the matrix traversing in a spiral path
#include<bits/stdc++.h>
using namespace std;
vector<int> spiral(vector<vector <int>> &v){
    int n = v.size();
    int m = v[0].size();
    vector<int> ans;
    int left = 0 , right = m-1 , top = 0 , bottom = n-1;
    while(top <= bottom && left <= right){
        for(int i = left ; i <= right ;i++){
            ans.push_back(v[top][i]);
        }
        top++;
        for(int i = top; i <= bottom ;i++){
            ans.push_back(v[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right ; i >= left ;i--){
                ans.push_back(v[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i = bottom ; i >= top ;i--){
                ans.push_back(v[i][left]);
            }
            left++;
        }
    }
    
    return ans;
}
int main(){
    vector<vector <int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    int n = v.size();
    vector<int >ans = spiral(v);
    for(auto it : ans)
    {
        cout<<it<<" ";
    }
    return 0;
}