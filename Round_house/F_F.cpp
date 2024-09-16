#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long l, h;
    cin >> h >> l;

    double ans = (double)(l * l - h * h) / (2 * h);

    cout << fixed << setprecision(13) << ans << endl;

    return 0;
}
