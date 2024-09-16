#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
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
        vector<int> v(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }
        int odd_cnt = 0, even_cnt = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < 2 * n; i++)
        {
            if (v[i] % 2 == 0)
            {
                even_cnt++;
            }
            else
            {
                odd_cnt++;
            }
        }
        if (even_cnt == odd_cnt)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
