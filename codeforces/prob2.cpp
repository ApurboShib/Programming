#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

bool palindrome(string &s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
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
        if (palindrome(s))
        {
            sort(s.begin(), s.end());
            if (palindrome(s))
                cout << -1 << endl;
            else
            {
                cout << s << endl;
            }
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}
