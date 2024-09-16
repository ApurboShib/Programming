#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += a[i][i];
    }
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += a[i][n - i - 1];
    }
    // cout << sum1 << ' ' << sum2 << endl;
    cout << abs(sum1 - sum2) << endl;
    return 0;
}
