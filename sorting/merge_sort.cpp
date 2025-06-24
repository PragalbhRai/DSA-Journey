#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &v, int low, int high, int mid)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (v[left] <= v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else
        {
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(v[left]);
            left++;
    }
    while(right <= high){
        temp.push_back(v[right]);
        right++;
    }
    for(int i = low; i <= high ; i++){
        v[i] = temp[i-low];
    }
}


void mergeSort(vector<int> &v,int low,int high){
    if(low == high)
        return;
    int mid = (low +high)/2;
    mergeSort(v,mid+1,high);
    mergeSort(v,low,mid);
    merge(v,low,high,mid);
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }
    mergeSort(v,0,v.size()-1);
    for(auto it : v){
        cout<<it<<" ";
        it++;
    }
    return 0;
}