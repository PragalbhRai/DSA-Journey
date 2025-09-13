// to check which number occurs the most number of time in a given array
// moore's voting algorithm
#include <bits/stdc++.h>
using namespace std;
int find_element(vector<int> v, int n)
{
    int element, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            element = v[i];
        }
        else if (v[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == element)
            cnt++;
    }
    if (cnt > n / 2)
        return element;
    return -1;
}
int main()
{
    vector<int> v = {2, 2, 3, 4, 2, 2, 1, 2};
    int n = v.size();
    cout << "The maximum occuring element is: " << find_element(v, n);
    return 0;
}