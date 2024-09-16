#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isPalindrome(string &s, int l, int r)
{
    while (l <= r)
    {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int len = s.size();
    int mx = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (isPalindrome(s, i, j))
            {
                mx = max(mx, j - i + 1);
            }
        }
    }
    cout << mx << endl;

    return 0;
}
