#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -((n / 2) + 1) << endl;
    }
    else
        cout << n / 2 << endl;
    return 0;
}
