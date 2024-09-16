#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;

    int cnt = 0;
    for (int i = a; i <= t; i += a)
    {
        cnt += b;
    }

    cout << cnt << endl;

    return 0;
}
