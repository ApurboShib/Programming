#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] / 100.0;
    }
    double ans = (sum / n) * 100.0;

    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}
