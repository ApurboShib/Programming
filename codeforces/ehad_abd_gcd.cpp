#include <bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int a = 1, b = x - 1;
        int gcd = __gcd(a, b);
        int LCM = lcm(a, b);
        if (gcd + LCM == x)
        {
            cout << a << ' ' << b << endl;
        }
    }
    return 0;
}