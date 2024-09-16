#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(ll a, ll b, ll r)
{
    ll suma = 0, sumb = 0;
    int x = -1;

    for (int i = 60; i >= 0; i--)
    {
        ll aa = a & (1ll << i);
        ll bb = b & (1ll << i);

        if (x == -1 && aa != bb)
        {
            if (aa)
                x = 1;
            else
                x = 2;

            suma += aa;
            sumb += bb;
            continue;
        }

        if ((1ll << i) > r)
        {
            suma += a & (1ll << i);
            sumb += b & (1ll << i);
            continue;
        }

        if (aa != bb)
        {
            if (x == 1)
            {
                sumb += a & (1ll << i);
                if (aa)
                    r -= (1ll << i);
            }
            else
            {
                sumb += (1ll << i);
                if (bb)
                    r -= (1ll << i);
            }
        }
    }

    return abs(suma - sumb);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, r;
        cin >> a >> b >> r;

        cout << solve(a, b, r) << endl;
    }

    return 0;
}
