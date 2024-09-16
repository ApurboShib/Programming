#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// vector<int> v;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << 'K' << s[1];
    cout << s[0];

    return 0;
}
