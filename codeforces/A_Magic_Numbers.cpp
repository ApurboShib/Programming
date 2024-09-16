#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    if (n % 4 == 0 || n % 14 == 0 || n % 144 == 0)
        cout << "YES" << endl;
    else
    {
        bool flag = true;

        while (n != 0)
        {
            int digit = n % 10;
            if (digit != 1 && digit != 4)
            {
                flag = false;
                break;
            }
            n /= 10;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
