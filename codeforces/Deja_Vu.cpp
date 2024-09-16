#include <bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int v[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        vector<int> x;
        for (int i = 1; i <= q; i++)
        {
            int u;
            cin >> u;
            if (x.empty() or x.back() > u)
            {
                x.push_back(u);
            }
        }
        for (auto &d : x)
        {
            for (int i = 1; i <= n; i++)
            {
                if (v[i] % (1 << d) == 0)
                {
                    int temp = d;
                    temp--;
                    v[i] += (1 << temp);
                }
            }
        }
        for (int i = 1; i <= n; i++)
            cout << v[i] << ' ';

        cout << end;
    }

    return 0;
}