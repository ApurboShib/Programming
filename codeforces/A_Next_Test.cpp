#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    int sum = 1;
    for (int x : s)
    {
        if (x == sum)
        {
            sum++;
        }
        else
        {
            break;
        }
    }

    cout << sum << endl;

    return 0;
}
