#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int solve(int n)
{
    int sum = 0;
    int p = 1;
    while (n != 0)
    {
        int dig = n % 10;
        n /= 10;
        if (dig != 0)
        {
            sum += dig * p;
            p *= 10;
        }
    }
    return sum;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;

    cin >> a >> b;
    int c = a + b;
    // cout << c << " ";
    int x = solve(a);
    //cout << x << ' ';
    int y = solve(b);
    //cout << y << ' ';
    int z = solve(c);
    //cout << z << ' ';
    if (x + y == z)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
