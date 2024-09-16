#include <bits/stdc++.h>
using namespace std;
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
        int cnt = 0;
        for (int i = 5; i <= n; i *= 5)
        {
            cnt += (n / i);
            // cout << "cnt = " << cnt<<endl;
        }
        cout << cnt << endl;
    }
    return 0;
}