#include <bits/stdc++.h>

using namespace std;

bool flag(string s)
{

    if (s[0] == '0')
        return false;
    return true;
}

bool solve(string s2, int &a, int &b)
{

    if (s2.length() < 2 || s2.length() > 8)
        return false;

    for (int i = 1; i < s2.length(); ++i)
    {
        string num1 = s2.substr(0, i);
        string num2 = s2.substr(i);

        if (!flag(num1) || !flag(num2))
            continue;

        a = stoi(num1);
        b = stoi(num2);

        if (b <= a)
            continue;

        string ans = num1 + num2;
        if (ans == s2)
            return true;
    }

    return false;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        string s2;
        cin >> s2;

        int a, b;
        if (solve(s2, a, b))
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
