#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
set<int> se;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            se.insert(i);
    }
    for (auto it : se)
        cout << it << endl;

    return 0;
}
