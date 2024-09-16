#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool isVowel(char ch)
{
    return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'y');
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string ans = " ";
    for (auto &x : s)
    {
        char c = tolower(x);
        if (!isVowel(c))
        {
            ans += '.';
            ans += c;
        }
    }
    cout << ans << endl;

    return 0;
}
