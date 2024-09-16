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

        int row = s[1] - '0';
        char col = s[0];

        vector<char> columns = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

        for (int i = 1; i <= 8; i++)
        {
            if (i != row)
            {
                cout << col << i << endl;
            }
        }

        for (int i = 0; i < 8; i++)
        {
            if (columns[i] != col)
            {
                cout << columns[i] << row << endl;
            }
        }
    }
    return 0;
}
