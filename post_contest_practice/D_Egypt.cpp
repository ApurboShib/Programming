#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;

    while (cin >> a >> b >> c)
    {
        if (a == 0 && b == 0 && c == 0)
            break;
        if ((a * a + b * b == c * c) or  (a * a + c * c == b * b) or  (b * b + c * c == a * a))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }

    return 0;
}
