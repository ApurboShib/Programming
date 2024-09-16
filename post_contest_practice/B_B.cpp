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
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && a < c)
            cout << "First" << endl;
        else if (b < a && b < c)
            cout << "Second" << endl;
        else
            cout << "Third" << endl;
    }

    return 0;
}
