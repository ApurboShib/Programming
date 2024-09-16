#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int mx = 0;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];

            if (sum >= m)
            {
                mx++;
                sum = 0;
            }
        }

        cout << mx << endl;
    }

    return 0;
}
