#include <bits/stdc++.h>
using namespace std;
#define end '\n'

int cnt_bit(int n)
{
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        if ((n >> i) & 1)
            cnt++;
    }
    return cnt;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans += cnt_bit(i);
        }
        cout << ans << end;
    }
    return 0;
}