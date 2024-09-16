#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int l, c;
        cin >> l >> c;

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }

        cout << endl;
    }
    return 0;
}