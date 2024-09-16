#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        int mx = INT_MIN;

        for (int i = n / x; i >= 1; i--)
        {
            if (n % i == 0)
            {
                mx = i;
                break;
            }
        }

        cout << mx << endl;
    }

    return 0;
}
