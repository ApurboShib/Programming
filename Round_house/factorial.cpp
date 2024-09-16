#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int fact[16];
    fact[0] = 1;
    for (int i = 1; i <= 15; i++)
    {
        fact[i] = i * fact[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[16];
        cout << fact[n] << endl;
    }
    return 0;
}