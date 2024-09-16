
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i + 2 < n; i++)
        {
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
                ans++;
            if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
                ans++;
        }
        for (int i = 0; i + 4 < n; i++)
        {
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i'  && s[i + 4] == 'e')
                ans--;
        }
        cout << ans << endl;
    }
    return 0;
}