#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> v(k);
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        v[x] = 1;
    }

    for (int i = n;; i++)
    {
        string s = to_string(i);
        bool f = true;
        for (auto c : s)
        {
            if (v[c - '0'])
            {
                f = false;
                break;
            }
        }
        if (f)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}
