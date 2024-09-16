#include <bits/stdc++.h>
using namespace std;
const int N = 3030;
bool is_prime[N];
bool solve(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool prime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            if (solve(i))
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        is_prime[i] = solve(i);
    }
    for (int i = 1; i <= n; ++i)
    {
        if (prime(i))
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
