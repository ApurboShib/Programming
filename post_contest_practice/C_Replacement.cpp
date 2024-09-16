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
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            v[i] = 0;
        else if (v[i] > 0)
        {
            v[i] = 1;
        }
        else
        {
            v[i] = 2;
        }
    }
    for (auto it : v)
        cout << it << ' ';
    return 0;
}
