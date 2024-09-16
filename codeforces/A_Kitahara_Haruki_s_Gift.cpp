#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int cnt_100 = 0, cnt_200 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 100)
            cnt_100++;
        else
            cnt_200++;
    }

    if (n < 2)
        cout << "NO" << endl;
    else if (sum % 200 == 0 && (cnt_100 % 2 == 0 or (cnt_200 > 0 && cnt_100 > 0)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
