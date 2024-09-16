#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    double mx = 0;

    for (int i = 1; i < n; i++)
    {
        mx = max(mx, (double)a[i] - a[i - 1] / 2);
    }
    mx = max(mx, (double)a[0]);
    mx = max(mx, (double)m - a[n - 1]);
    cout << fixed << setprecision(10) << mx << endl;
    return 0;
}
