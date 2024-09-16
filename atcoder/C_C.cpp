#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    vector<int> odd, even;

    for (int i = 0; i < n; ++i)
    {
        if (v[i] % 2 == 0)
        {
            even.push_back(v[i]);
        }
        else
        {
            odd.push_back(v[i]);
        }
    }

    sort(odd.rbegin(), odd.rend());

    sort(even.begin(), even.end());

    vector<int> res;
    res.insert(res.end(), odd.begin(), odd.end());
    res.insert(res.end(), even.begin(), even.end());

    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << " ";
    }

    cout << endl;

    return 0;
}
