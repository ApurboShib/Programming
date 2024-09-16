#include <bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, sum;
    cin >> n >> sum;
    int ans = 0;
    while (sum >= n)
    {
        ++ans;
        sum -= n;
    }
    if (sum >= 1)
        ans++;
    cout << ans << end;
    return 0;
}