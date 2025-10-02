// given two arrays put all the elements in the two arrays in sorted order
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr1 , vector<int> &arr2){
    int left = arr1.size()-1;
    int right = 0;
    while(left >= 0 && right < arr2.size()){
        if(arr1[left] > arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

}
int main(){
    vector<int> arr1 = {1,3,5,7};
    vector<int> arr2 = {0,2,6,8,9};
    merge(arr1,arr2);
    for(auto it : arr1){
        cout<<it<<" ";
    }
    for(auto it : arr2){
        cout<<it<<" ";
    }
}