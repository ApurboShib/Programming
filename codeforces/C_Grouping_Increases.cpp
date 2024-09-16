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

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int x = INT_MAX, y = INT_MAX;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (x > y)
            {
                swap(x, y);
            }
            if (a[i] <= x)
            {
                x = a[i];
            }
            else if (a[i] <= y)
            {
                y = a[i];
            }
            else
            {
                x = a[i];
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
