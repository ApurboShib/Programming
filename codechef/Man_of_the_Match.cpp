#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 22;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    std::cin >> T;

    while (T--)n
    {

        vector<int> ans(N, 0);

        for (int i = 0; i < N; ++i)
        {
            int r, w;
            cin >> r >> w;
            ans[i] = r + (w * 20);
        }

        int mx = 0;
        for (int i = 1; i < N; ++i)
        {
            if (ans[i] > ans[mx])
            {
                mx = i;
            }
        }

        cout << mx + 1 << endl;
    }
    return 0;
}
