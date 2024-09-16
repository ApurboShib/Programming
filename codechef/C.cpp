#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int K;
        if (x > 1)
        {
            K = min(y / (x - 1), y);
        }
        else
        {
            K = y;
        }

        cout << K << endl;
    }

    return 0;
}
