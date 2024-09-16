#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string ans;
        if (s[0] == 'a')
        {
            cout << "aa" << endl;
            continue;
        }
        if (s[0] == s[1])
        {
            cout << s[0] << s[1] << endl;
            continue;
        }
        ans += s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] <= s[i - 1])
            {
                ans += s[i];
            }
            else
                break;
        }
        string temp = ans;
        reverse(temp.begin(), temp.end());
        cout << ans + temp << endl;
    }

    return 0;
}
