/*#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string ans = " ";
    int len = s.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == '.')
        {
            int r = len - i;
            ans += s.substr(i + 1, r) + ".";
            len = i - 1;
        }
    }
    ans += s.substr(0, len + 1);
    cout << ans << endl;

    return 0;
}*/

// just normally reverse the word
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    string ans = " ";
    int len = s.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            int r = len - i;
            ans += s.substr(i + 1, r) + ' ';
            len = i - 1;
        }
    }
    ans += s.substr(0, len + 1);
    cout << ans << endl;

    return 0;
}
