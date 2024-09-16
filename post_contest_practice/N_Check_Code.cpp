#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    // if (s[a] == '-')
    //     cout << "Yes" << endl;
    // else
    //     cout << "No" << endl;
    int ans = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '-')
            ans += i;
    }
    if ((a + 1) == ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
