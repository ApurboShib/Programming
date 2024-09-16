#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << '\n';
        for (int i = 1; i <= n / 2; i++)
        {
            cout << 2 << ' ';
        }
        cout << '\n';
    }
    else
    {
        cout << n / 2 << '\n';
        for (int i = 1; i < n / 2; i++)
        {
            cout << 2 << ' ';
        }
        cout << 3 << '\n';
    }
    return 0;
}
