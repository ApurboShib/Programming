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
        int cnt = n / 10;
        if (n % 10 == 9)
            cnt++;
        cout << cnt << endl;
    }
    return 0;
}
