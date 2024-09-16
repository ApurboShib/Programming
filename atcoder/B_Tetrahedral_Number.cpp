#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= n; k++)
            {
                int sum = i + j + k;
                if (sum <= n)
                {
                    cout << i << ' ' << j << ' ' << k << endl;
                }
            }
        }
    }
    return 0;
}
