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
    for(int i = 0 ; i <= n-2 ; i++){
        int min = i;
        for(int j = i ; j <= n-1 ; j ++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    cout<<"Sorted Array: ";
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}