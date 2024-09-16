#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    while (cin >> n)
    {
        if (n < 0)
            break;
        else
        {
            cout << (((n * n) + n) / 2) + 1 << endl;
        }
    }

    return 0;
}
