// search and return true or false in a 2D sorted matrix
#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>&matrix,int target){
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0, high = m*n -1;
    while(low<=high){
        int mid = (low+high)/2;
        int i = mid/m;
        int j = mid%m;
        if(matrix[i][j] == target)
            return true;
        if(matrix[i][j] > target)
            high = mid-1;
        else
            low = mid+1;
    }
    return false;
}
int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<search(matrix,34);
    return 0;
}