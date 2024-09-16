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

        vector<int> planks(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> planks[i];
        }

        sort(planks.rbegin(), planks.rend());

        int maxSteps = 0;
        for (int k = 0; k < n - 2; ++k)
        {

            if (planks[k] >= k + 1 && planks[k + 1] >= k + 1 && planks[k + 2] >= 1)
            {
                maxSteps = k;
            }
            else
            {
                break;
            }
        }

        cout << maxSteps << endl;
    }

    return 0;
}
