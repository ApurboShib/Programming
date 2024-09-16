#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int ans;
    while (t--)
    {
        unsigned int x, k;
        cin >> x >> k;
        x =  x | (1u << k);
        // cout << ans << endl;
        cout << x << endl;
    }
    return 0;
}