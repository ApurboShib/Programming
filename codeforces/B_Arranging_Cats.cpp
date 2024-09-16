#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int f(int n, string &s1, string &s2)
{
    if (s1 == s2)
    {
        return 0;
    }

    int ans = 0, res = 0;

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '0' && s2[i] == '1')
        {
            ans++;
        }
        else if (s1[i] == '1' && s2[i] == '0')
        {
            res++;
        }
    }

    return min(ans, res) + abs(ans - res);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;

        cout << f(n, s1, s2) << endl;
    }

    return 0;
}
