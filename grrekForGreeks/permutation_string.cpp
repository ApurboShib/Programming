#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void permute_string(string s, int l, int r)
{
    if (l == r)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permute_string(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }
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
        int len = s.size();
        int ind = 0;
        permute_string(s, 0, len - 1);
    }

    return 0;
}
