
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i = n-1; i >= 0 ;i--){
        if(v[i] > maxi){
            ans.push_back(v[i]);
        }
        maxi = max(maxi,v[i]);
    }