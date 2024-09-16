#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[ind])
            continue;
        else
            ind++;
    }
    if (ind == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
