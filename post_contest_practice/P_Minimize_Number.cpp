#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = true;
    int cnt = 0;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            for (int i = 0; i < n; i++)
            {
                v[i] = v[i] / 2;
            }
            cnt++;
        }
        else
            break;
    }
    cout << cnt << endl;

    return 0;
}
