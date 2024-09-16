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
    while (a != b)
    {
        cnt++;
        if (b < a or b % 2 != 0)
            b++;
        else
            b /= 2;
    }
    cout << cnt << endl;

    return 0;
}
