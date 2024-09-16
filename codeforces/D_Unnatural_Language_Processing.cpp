#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    ;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b' or s[i] == 'c' or s[i] == 'd')
                cout << s[i];
            else
            {
                cout << s[i];
                if (s[i + 1] == 'b' or s[i + 1] == 'c' or s[i + 1] == 'd')
                {
                    if (s[i + 2] != 'a' && s[i + 2] != 'e')
                    {
                        cout << s[i + 1];
                        i++;
                    }
                }
                if (i != n - 1)
                    cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}
