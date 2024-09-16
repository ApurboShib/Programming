#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N], b[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b + 1, b + n + 1);
    vector<long long> pref_1(n + 1);
    vector<long long> pref_2(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pref_1[i] = pref_1[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        pref_2[i] = pref_2[i - 1] + b[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, l, r;
        cin >> x >> l >> r;
        if (x == 1)
        {
            cout << pref_1[r] - pref_1[l - 1] << '\n';
        }
        else
        {
            cout << pref_2[r] - pref_2[l - 1] << '\n';
        }
    }
    return 0;
}
