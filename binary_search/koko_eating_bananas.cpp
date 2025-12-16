// return the minimum integer k such that koko can eat all bananas within h hours
#include <bits/stdc++.h>
using namespace std;
long long hours(vector<int> &piles, int h)
{
    long long th = 0;
    for (auto it : piles)
    {
        th += (it + h - 1) / h;
    }
    return th;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int n = piles.size();
    long long high = piles[0];
    for (auto it : piles)
    {
        if (it > high)
            high = it;
    }
    long long low = 1;
    long long mid = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        long long totalhrs = hours(piles, mid);
        if (totalhrs <= h)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return low;
}
int main()
{
    vector<int> piles = {30,11,23,4,20};
    int ans  = minEatingSpeed(piles,6);
    cout<<ans<<endl;
    return 0;
}