// find the maximum integer whic on squaring is <= n
#include <bits/stdc++.h>
using namespace std;
int sqrt(int n)
{
    int low = 1, high = n;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long val = mid*mid;
        if(val <= n)
            low = mid+1;
        else
            high = mid - 1;
    }
    return high;
}
int main()
{
    int ans = sqrt(28);
    cout << ans << endl;
    return 0;
}