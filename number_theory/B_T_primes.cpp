#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;

bool is_prime[N];
void sieve()
{
    is_prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        is_prime[i] = true;
    }
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j < N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;

        int p = sqrtl(x);
        while (1LL * p * p < x)
            ++p;
        while (1LL * p * p > x)
            --p;

        if (1LL * p * p == x)
        {
            if (is_prime[p])
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}