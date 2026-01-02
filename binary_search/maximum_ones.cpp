// given a 2D matrix retur the row with maximum 1s
#include<bits/stdc++.h>
using namespace std;
 int rowWithMax1s(vector<vector<int>> &arr) {
        int cnt_max = -1;
        int idx = -1;
        
        int rows = arr.size();
        
        for(int i = 0; i < rows; i++){
            auto it = lower_bound(arr[i].begin(), arr[i].end(), 1);
            int cnt_ones = arr[i].size() - (it - arr[i].begin());
            
            if(cnt_ones > cnt_max){
                cnt_max = cnt_ones;
                idx = i;
            }
        }
        
        return idx;
    }
int main(){
    vector<vector<int>> arr = {{0,1,1,1}, {0,0,1,1}, {1,1,1,1}, {0,0,0,0}};
    int ans = rowWithMax1s(arr);
    cout<<ans;
    return 0;
}