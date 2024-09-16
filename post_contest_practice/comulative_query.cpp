#include <bits/stdc++.h>
using namespace std;
#define end '\n'
const int N = 1e6 + 7;
int a[N];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> pref(n);
    pref[0] = 0;
    for (int i = 0; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << end;
    }
    return 0;
}