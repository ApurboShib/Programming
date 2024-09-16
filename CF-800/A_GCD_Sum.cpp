#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll digit_sum(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve(ll n)

{
    while (true)
    {
        if (gcd(n, digit_sum(n)) > 1)
        {
            cout << n << endl;
            return;
        }
        n++;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        solve(n);
    }

    return 0;
}
