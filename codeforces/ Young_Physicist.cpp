#include <bits/stdc++.h>
using namespace std;
#define end '\n'
void solve(int a[][3], int n)
{
    int s1 = 0, s2 = 0, s3 = 0;

    for (int i = 0; i < n; i++)
    {
        s1 += a[i][0];
        s2 += a[i][1];
        s3 += a[i][2];
    }
    // cout << s1 << ' ' << s2 << ' ' << s3<<end;
    if (s1 == 0 && s2 == 0 && s3 == 0)
        cout << "YES" << end;
    else
        cout << "NO" << end;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin >> n;

    int a[n][3];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    solve(a, n);

    return 0;
}