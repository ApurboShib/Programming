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
        string s;
        cin >> s;
        int last_digit = s[s.size() - 1] - '0';
        if (last_digit % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
    return 0;
}