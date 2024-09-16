#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 3010;
vector<int> v(N);

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool f(int n)
{
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (v[i])
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
        return true;
    return false;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        v[i] = isPrime(i);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (f(i))
            ++ans;
    }
    cout << ans << endl;

    return 0;
}
