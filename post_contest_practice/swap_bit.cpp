#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unsigned int ans = 0;
        for (int k = 0; k < 32; k += 2)
        {
            int a = (n >> k) & 1;
            int b = (n >> (k + 1)) & 1;
            swap(a, b);
            if (a)
            {
                ans += 1 << k;
            }
            if (b)
            {
                ans += 1 << (k + 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}