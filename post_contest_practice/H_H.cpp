#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N], n, k;

bool f(int x)
{
    long long sum = 0;
    for (int i = n / 2 + 1; i <= n; i++)
    {
        if (a[i] < x)
            sum += x - a[i];
    }
    return sum <= k;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int l = 1, r = 2e9, ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (f(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}