#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool f(int n)
{
    set<int> se;
    // int sum = 0;

    while (n != 0)
    {
        int dig = n % 10;
        if (se.find(dig) != se.end())
        {
            return false;
        }
        se.insert(dig);
        n /= 10;
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y;
    cin >> y;
    while (y++)
    {
        if (f(y))
        {
            cout << y << endl;
            return 0;
        }
    }

    return 0;
}
