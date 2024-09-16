#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(int a, int b, int c)
{
    int result1 = (abs(b - c) % 2 == 0) ? 1 : 0;
    int result2 = (abs(a - c) % 2 == 0) ? 1 : 0;
    int result3 = (abs(a - b) % 2 == 0) ? 1 : 0;

    cout << result1 << " " << result2 << " " << result3 << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        solve(a, b, c);
    }
    return 0;
}
