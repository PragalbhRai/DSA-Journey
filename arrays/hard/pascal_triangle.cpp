// write a program to print the entire pascal triangle for a given rows n
#include<bits/stdc++.h>
using namespace std;
vector<int> generate_rows(int row){
    long long ans = 1;
    vector<int> ans_row;
    ans_row.push_back(1);
    for(int col = 1; col < row; col++){
        ans = ans*(row-col);
        ans = ans/col;
        ans_row.push_back(ans);
    }
    return ans_row;
}
int main(){
    int row;
    cout<<"Enter number of rows: \n";
    cin>>row;
    vector<vector<int>> ans;
    for(int i = 1; i <= row;i++){
        ans.push_back(generate_rows(i));
    }
    for (auto it : ans) {
        for (auto num : it) {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}