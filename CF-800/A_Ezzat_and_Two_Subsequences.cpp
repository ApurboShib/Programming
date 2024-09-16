#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ld long double
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

        vector<long long> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        ld sumA = v[v.size() - 1];
        ld sumB = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            sumB += v[i];
        }

        ld ans = sumA + (sumB / (n - 1));

        cout << fixed << setprecision(9) << ans << endl;
    }

    return 0;
}
