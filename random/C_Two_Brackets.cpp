#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        int op1 = 0, op2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                op1++;
            }
            else if (s[i] == '[')
            {
                op2++;
            }
            else if (s[i] == ')')
            {
                if (op1 >= 1)
                {
                    cnt++;
                    op1--;
                }
            }
            else if (s[i] == ']')
            {
                if (op2 >= 1)
                {
                    cnt++;
                    op2--;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
