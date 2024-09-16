#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool is_prime(int n)
{
    if (n < 2)
        return false;
    // if(n<=3)return true;
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
    int n;
    cin >> n;
    for (int i = 1; i <= 1000; i++)
    {
        int ans = n * i + 1;
        if (!is_prime(ans))
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
