// prefix sum..

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<long long> pref(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1]; // create the prefix sum array ...
    }
    // for(auto ele : pref)cout << ele << " ";
    // cout << '\n';

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << "Range sum is : " << pref[b] + pref[a - 1] << '\n';
    }
    return 0;
}