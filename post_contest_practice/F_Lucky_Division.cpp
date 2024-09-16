#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0)
        cout << "YES" << endl;
    else
    {
        bool flag = true;

        while (n != 0)
        {
            int dig = n % 10;
            if (dig != 4 && dig != 7)
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
