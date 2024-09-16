#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    int cnt5 = 0;
    int cnt0 = 0;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 5)
            cnt5++;
        else
            cnt0++;

        if ((cnt5 * 5) % 9 == 0)
            ans = cnt5;
    }
    //  cout << cnt0<<endl;
    // cout << cnt5<<endl;
    if (ans != 0 && cnt0 > 0)
    {
        for (int i = 0; i < ans; i++)
            cout << 5;
        for (int i = 0; i < cnt0; i++)
            cout << 0;
    }
    else if (cnt0 > 0)
        cout << 0;
    else
        cout << -1;
    return 0;
}
