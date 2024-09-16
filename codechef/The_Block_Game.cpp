#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool isPalindrome(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isPalindrome(s))
            cout << "wins" << endl;
        else
            cout << "loses" << endl;
    }
    return 0;
}
