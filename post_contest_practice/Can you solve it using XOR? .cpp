#include <bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum ^= a[i];
    }
    cout << sum << end;

    return 0;
}