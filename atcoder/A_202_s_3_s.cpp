#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    s[0] = '4';
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}
