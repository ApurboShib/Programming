#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}
