#include <bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mx = a[0];
    int mn = a[0];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            cnt++;
        }
        if (a[i] < mn)
        {
            mn = a[i];
            cnt++;
        }
    }
    cout << cnt << end;
    return 0;
}