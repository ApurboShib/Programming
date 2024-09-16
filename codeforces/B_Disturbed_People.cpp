#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = 0;
    cin >> n;

    int a[n + 2];
    a[0] = 0, a[n + 1] = 0;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n - 2; ++i)
    {
        if (a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1)
        {
            ans++;
            i += 2;
        }
    }
    cout << ans << endl;
    return 0;
}
