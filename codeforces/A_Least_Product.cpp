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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int z = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                z++;
            else if (v[i] < 0)
                neg++;
        }
        if (z > 0 or neg % 2 != 0)
            cout << 0 << endl;
        else
        {
            cout << 1 << endl;
            cout << 1 << ' ' << 0 << endl;
        }
    }

    return 0;
}
