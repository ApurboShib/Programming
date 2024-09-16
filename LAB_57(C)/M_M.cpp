#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (b == 0)
    {
        if (a == 1)
        {
            cout << "0 0" << endl;
            return 0;
        }
        else
        {
            cout << "-1 -1" << endl;
            return 0;
        }
    }
    string mx;
    string mn;
    for (int i = 0; i < a; i++)
    {
        int k = min(9, b);
        mx.push_back('0' + k);
        b -= k;
    }
    if (b > 0)
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    for (int i = a - 1; i >= 0; i--)
    {
        mn.push_back(mx[i]);
    }
    int x = 0;
    while (mn[x] == '0')
        x++;
    mn[0]++;
    mn[x]--;
    cout << mn << ' ' << mx << endl;
    return 0;
}
