#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int i = 0;
    while (t--)
    {
        i++;
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        cout << "Case " << i << ':' << ' ';
        for (int i = 0; i < 3; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}