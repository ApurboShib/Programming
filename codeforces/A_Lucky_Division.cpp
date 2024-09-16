#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0)
        cout << "YES" << endl;
    else
    {
        bool flag = true;

        while (n != 0)
        {
            int digit = n % 10;
            if (digit != 4 && digit != 7)
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