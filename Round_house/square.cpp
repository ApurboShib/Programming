#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int a[t];

    for (int i = 0; i < t; i++)
        cin >> a[i];

    for (int i = 0; i < t; i++)
    {
        if (floor(sqrt(a[i])) == ceil(sqrt(a[i])))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
