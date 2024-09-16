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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    bool flag = false;
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag = true;
            ind = i;
            break;
        }
    }
    cout << ind << endl;

    return 0;
}
