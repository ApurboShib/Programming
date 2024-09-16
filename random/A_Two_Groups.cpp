#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        ll sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum1 += v[i];
        }
        cout << abs(sum1) << endl;
    }
    return 0;
}
