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
        int c1 = n / 3;
        int c2 = n / 3;
        int x = n % 3;
        if (x == 1)
            c1++;
        if (x == 2)
            c2++;
        cout << c1 << ' ' << c2 << endl;
    }
    return 0;
}
