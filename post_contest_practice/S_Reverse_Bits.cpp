#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int a[32];
        for (int i = 0; i < 32; i++)
        {
            a[i] = ((x >> i) & 1);
        }
        reverse(a, a + 32);
        unsigned int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (a[i])
            {
                ans += (1 << i);
            }
        }
        cout << ans << ' ';
    }

    return 0;
}
