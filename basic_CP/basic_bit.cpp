#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << INT_MAX << endl;
    // int a = (1 << 31) - 1;
    // cout << a << endl;
    // unsigned int b = (1 << 32) - 1;
    // cout << b << endl;
    // int n = 17;
    // cout << (n & (n - 1)) << endl; // er agher kon number ta 2 er power seta find kore, jodi number tai 2 er power hoy
    // taile output ashbe 0.
    int x = 8;
     if (x & (x - 1) == 1) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
