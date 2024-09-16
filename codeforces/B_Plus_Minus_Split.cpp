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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int plus = count(s.begin(), s.end(), '+');
        int minus = count(s.begin(), s.end(), '-');

        if (plus < minus)
        {
            minus -= plus;
            cout << minus << endl;
        }
        else if (plus == minus)
        {
            cout << 0 << endl;
        }
        else
        {
            plus -= minus;
            cout << plus << endl;
        }
    }

    return 0;
}
