#include<bits/stdc++.h>
using namespace std;
int qsort(vector<int> &v,int low,int high){
    int pivot = v[low];
    int i = low;
    int j = high;
    while(i<j){
        while(v[i] <= pivot && i <= high-1){
            i++;
        }
        while(v[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j)
            swap(v[i] , v[j]);
    }
    swap(v[low],v[j]);
    return j;
}
void qs(vector<int> &v, int low,int high){
    if(low<high){
        int partition = qsort(v,low,high);
        qs(v,low,partition-1);
        qs(v,partition+1,high);
    }
}
vector<int> quickSort(vector<int> v){
    qs(v , 0 , v.size()-1);
    return v;
} 
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int value;
    for(int i = 0 ; i < n ; i++){
        cin>>value;
        v.push_back(value);
    }
    vector<int> sorted = quickSort(v);
    for(auto it: sorted){
        cout<<it<<" ";
        it++;
    }
    return 0;
}