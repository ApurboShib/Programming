#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool is_prime(int n)
{
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
    if (is_prime(n))
        cout << "Prime Number." << endl;
    else
        cout << "Not Prime" << endl;
    return 0;
}
