#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << "safe" << endl;
    else
        cout << "unsafe" << endl;

    return 0;
}
