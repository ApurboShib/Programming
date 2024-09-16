#include <bits/stdc++.h>
using namespace std;
void divisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // cout << "divisor are : " << ' ';
        if (n % i == 0)
        {
            cout << i << '\n';
        }
    }
    cout << '\n';
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    divisor(n);
    return 0;
}