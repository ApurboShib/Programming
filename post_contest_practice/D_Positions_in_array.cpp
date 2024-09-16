#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    // int cs = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= 10)
        {
            cout << "A[" << i << ']' << ' ' << '=' << ' ' << v[i] << endl;
        }
    }

    return 0;
}
