#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool digit(int n)
{
    int dig;
    while (n != 0)
    {
        dig = n % 10;
        if (dig == 7)
            return true;
        n /= 10;
    }
    return false;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // string s;
    // cin >> s;
    // if(s[s.size()-1]=='7')cout << "Yes" << endl;
    // else cout << "No" << endl;
    int n;
    cin >> n;
    if (digit(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
