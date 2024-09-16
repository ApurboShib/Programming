#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool is_prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int solve(int d)
{
    int x = 1 + d;
    while (!is_prime(x))
    {
        x++;
    }
    int y = x + d;
    while (!is_prime(y))
    {
        y++;
    }
    return x * y;
}
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
        cout << solve(n) << endl;
    }

    return 0;
}
