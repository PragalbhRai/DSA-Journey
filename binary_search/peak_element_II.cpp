// given a 2D matrix return the index of any one of the peak elements in the matrix
// the outer edges of the matrix is surrounded by -1
#include<bits/stdc++.h>
using namespace std;
int maxElement(vector<vector<int>>&matrix,int mid){
    int n = matrix.size();
    int max = -1 , idx = -1;
    for(int i = 0 ; i < n ;i++){
        if(matrix[i][mid] > max){
            max = matrix[i][mid];
            idx = i;
        }
    }
    return idx;
}
vector<int> peakElement(vector<vector<int>> &matrix){
    int m = matrix[0].size();
    int low = 0 , high = m-1;
    while(low<=high){
        int mid = (low+high)/2;
        int row = maxElement(matrix,mid);
        int left = mid-1 >= 0 ? matrix[row][mid-1] : -1;
        int right = mid+1 > m ? -1 : matrix[row][mid+1];
        if(matrix[row][mid] > left && matrix[row][mid] > right)
            return {row,mid};
        if(matrix[row][mid] < left)
            high = mid-1;
        else
            low = mid+1;
    }
    return {-1,-1};
}
int main(){
    vector<vector<int>> matrix = {{1,4},{3,2}};
    vector<int> ans = peakElement(matrix);
    for(auto it:ans)
        cout<<it<<" ";
    return 0;
}