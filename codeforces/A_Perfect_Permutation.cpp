#include <bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << -1 << end;
        return 0;
    }

    vector<int> v(n);

    if (n >= 2)
    {
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                v[i] = i + 2;
            }
            else
            {
                v[i] = i;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << v[i] << " ";
    }
    cout << end;

    return 0;
}