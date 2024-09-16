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
        string A, B, C, D, E, F;
        cin >> A >> B >> C >> D >> E >> F;

        if ((A == "W" && B == "W" && C == "W") ||
            (B == "W" && C == "W" && D == "W") ||
            (C == "W" && D == "W" && E == "W") ||
            (D == "W" && E == "W" && F == "W"))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
