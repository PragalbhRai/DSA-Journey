#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // bool check(int l, int r, string s){
    //     if(l==r)
    //         return true;
    //     if(s[l] != s[r])
    //         return false;
    //     return check(l+1,r-1,s);
    // }
    bool isPalindrome(string s)
    {
        int n = sizeof(s.begin(), s.end());
        if (n < 1 || n > (2 * (pow(10, 5))))
            return false;
        transform(s.begin(), s.end(), s.begin(), [](char c)
                  { return tolower(static_cast<unsigned char>(c)); });
        cout << s;
        string st = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] < 'a' || s[i] > 'z')
                continue;
            else
                st += s[i];
        }
        // return check(0,n,st);
    }
};
int main()
{
    Solution ob;
    string s;
    cout << "enter a string: ";
    cin >> s;
    int n = sizeof(s.begin(), s.end());
    ob.isPalindrome(s);
    return 0;
}