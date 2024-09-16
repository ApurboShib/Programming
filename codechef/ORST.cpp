#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(k);
        for (int i = 0; i < k; i++)
            cin >> b[i];

        int mx = *max_element(b.begin(), b.end());

        if (mx >= n)
        {
            mx = 0;
        }
        else
        {
            mx = n - mx;
        }

        sort(a.begin() + mx, a.end());

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
