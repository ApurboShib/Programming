#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define uin unsigned int
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    uin t;
    cin >> t;
    while (t--)
    {
        uin n;
        cin >> n;
        uin ans = 0;
        for (int i = 0; i < 32; i++)
        {
            // check the last bit is 1 or 0.
            if ((n >> i) & 1)
            {
            }
            else
            {
                // binary repersenations.
                ans += 1 << i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
