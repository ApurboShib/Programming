#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt1 = 0;
    int cnt0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            cnt0++;
        else
            cnt1++;
    }
    // cout << cnt0 << ' ' << cnt1 << endl;
    if (cnt1 > 0)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}
