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
        long long a, b;
        cin >> a >> b;
        long long gcd = __gcd(a, b);
        long long cnt = 0;
        for (int i = 1; i * i <= gcd; i++)
        {
            if (gcd % i == 0)
            {
                cnt++;
                if (i != gcd / i)
                    cnt++;
            }
        }
        cout << cnt << end;
    }
    return 0;
}