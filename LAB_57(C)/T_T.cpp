#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {

        int x, y;
        cin >> x >> y;

        int sum = x + y;
        int cnt = 1;

        while (!is_prime(sum + cnt))
        {
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
