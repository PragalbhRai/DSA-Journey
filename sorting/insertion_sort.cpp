#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i <= n-1; i++){
        int j = i;
        while(j>0 && a[j-1]>a[j]){
            int temp =  a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
            j--;
        }
    }
    cout<<"Sorted Array: ";
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}