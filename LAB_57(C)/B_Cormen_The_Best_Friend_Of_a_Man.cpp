#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] + a[i - 1] < m)
        {
            cnt += m - a[i] - a[i - 1];
            a[i] = m - a[i - 1];
        }
    }

    cout << cnt << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}
