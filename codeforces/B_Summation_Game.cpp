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
        int n, a, b;
        cin >> n >> a >> b;

        vector<int>v(n);
        vector<int>v2(n);

        for (int i = 0; i < n; i++)
        {
            cin >>v[i];
        }

        sort(v.begin(),v.end(), greater<int>());

        int l = 0, r = 0, sum = 0;

        while (l < n)
        {
            if (r >= b)
            {
               v2[l] = sum;
                sum = sum -v[l];
                l++;
                if (r < n)
                {
                    sum = sum +v[r];
                    r++;
                }
            }
            else
            {
                sum = sum +v[r];
                r++;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (i < n - 1)
               v[i] =v[i] +v[i + 1];
        }

        int ans =v[0] - (2 *v2[0]), cnt = 0;

        for (int i = 0; i < n; i++)
        {
            int res =v[i] - (2 *v2[i]);
            ans = max(ans, res);
            if (cnt == a)
                break;
            cnt++;
        }

        if (ans < 0 && a == n)
            ans = 0;

        cout << ans << endl;
    }

    return 0;
}
