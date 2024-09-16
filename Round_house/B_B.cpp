#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
int a[N];

bool check(int i, int j)
{
    return abs(i - j) == 1 && a[i] == 1 && (a[j] == 0 || a[j] > a[i]);
}

bool f(int n)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == n)
        {
            ans = i;
            break;
        }
    }

    if (ans == 0)
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            if (check(i, ans))
            {
                a[i] = 0;
                a[ans] = i;
            }
            else if (check(i, ans - 1))
            {
                a[i] = 0;
                a[ans - 1] = i;
            }
            else if (check(i, ans + 1))
            {
                a[i] = 0;
                a[ans + 1] = i;
            }
            else
            {
                return false;
            }
        }
    }

    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (f(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
