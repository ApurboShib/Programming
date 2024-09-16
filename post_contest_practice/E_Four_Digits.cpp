#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if (s.size() < 1)
        cout << "0000" << endl;
    else if (s.size() < 2)
        cout << "000" << s << endl;
    else if (s.size() < 3)
        cout << "00" << s << endl;
    else if (s.size() < 4)
        cout << "0" << s << endl;
    else
        cout << s << endl;

    return 0;
}
