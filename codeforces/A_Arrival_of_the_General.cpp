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
    {
        cin >> a[i];
    }
    int mx_val = INT_MIN;
    int mn_val = INT_MAX;
    int mx, mn;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx_val)
        {
            mx_val = a[i];
            mx = i;
        }
        if (a[i] <= mn_val)
        {

            mn_val = a[i];
            mn = i;
        }
    }
    if (mx > mn)
        mn++;
    cout << mx + (n - 1) - mn;

    return 0;
}
