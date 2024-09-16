#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int mx = 0;
    int ans = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= n; j++)
        {
            if (a[j] % i == 0)
            {
                cnt++;
            }
        }
        if (cnt >= mx)
        {
            ans = i;
            mx = cnt;
        }
    }
    cout << ans << endl;
    return 0;
}